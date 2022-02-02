// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    
  /*  void solve(string str, int k, string &res)
    {
        if(k==0)
          return;
          
        int n=str.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(str[i]<str[j])
                {
                    swap(str[i], str[j]);
                    if(str.compare(res)>0)
                      res=str;
                    solve(str, k-1, res);
                    swap(str[i], str[j]);  //backtrack
                }
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
        string res=str;
        solve(str, k, res);
        return res;
    }  */
    
    void solve(string str, int k, string& res, int ctr)
    {
        if(k==0)
           return;
        
        int n=str.size();
        char curr=str[ctr];
        
        for(int j=ctr+1; j<n; j++)
          curr=max(curr, str[j]);
          
        if(curr!=str[ctr])
          k--;
          
        for(int j=n-1; j>=0; j--)
        {
            if(str[j]==curr)
            {
                swap(str[j], str[ctr]);
                if(str.compare(res)>0)
                  res=str;
                solve(str, k, res, ctr+1);
                swap(str[j], str[ctr]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
        string res=str;
        solve(str, k, res, 0);
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends