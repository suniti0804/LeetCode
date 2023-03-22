//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string S){
      long long answer=0;
      string a="pr";
      string b="rp";
      if(X<Y)
      {
        swap(X,Y);
        swap(a,b);
      }

      stack<char> st;
      for(int i=(int)S.size()-1;i>=0;i--)
      {
        if(st.size()>0&&S[i]==a[0]&&st.top()==a[1])
        {
          st.pop();
          answer+=X;
        }
        else
        {
          st.push(S[i]);
        }
      }

      S="";
      while(st.size()>0){
        S.push_back(st.top());
        st.pop();
      }

      for(int i=(int)S.size()-1;i>=0;i--)
      {
        if(st.size()>0&&S[i]==b[0]&&st.top()==b[1])
        {
          st.pop();
          answer+=Y;
        }
        else
        {
          st.push(S[i]);
        }
      }
      return answer;
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends