// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string res="";
        stack<char> st;
        for(int i=S.size()-1; i>=0; i--)
        {
            if(S[i]=='.'||i==0)
            {
                if(i==0)
                  st.push(S[i]);
                while(!st.empty())
                {
                    res+=st.top();
                    st.pop();
                }
                
                if(i!=0)
                 res+='.';
            }
            
            else
              st.push(S[i]);
        }
        
        return res;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends