// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // s is the given string
    int SubsequenceLength (string s) 
    {
        int mp[256]; //last index of each character
        memset(mp, -1, sizeof(mp));
        int len=0;
        
        int j=0;
        for(int i=0; i<s.size(); i++)
        {
            j=max(j, mp[s[i]]+1);
            len=max(len, i-j+1);
            mp[s[i]]=i;
        }
        
        return len;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution obj;
        cout<<obj.SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends