// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long curr_sum=0;
        int start=0;
        for(int i=0; i<n; i++)
        {
            curr_sum+=arr[i];
            //cout<<curr_sum<<"\n";
            if(curr_sum==s)
              return {start+1, i+1};
            else if(curr_sum>s)
            {
                while(curr_sum>s)
                {
                    curr_sum-=arr[start];
                    start++;
                }
                if(curr_sum==s)
                  return {start+1, i+1};
            }
        }
        return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends