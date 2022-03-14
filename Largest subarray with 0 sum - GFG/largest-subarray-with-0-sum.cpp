// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int res=0;
        unordered_map<int, int> mp;
        int curr_sum=0;
        
        for(int i=0; i<n; i++)
        {
            curr_sum+=A[i];
            if(curr_sum==0)
               res=i+1;
            if(mp.find(curr_sum)!=mp.end())
               res=max(res, i-mp[curr_sum]);
            else   
               mp[curr_sum]=i;   
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends