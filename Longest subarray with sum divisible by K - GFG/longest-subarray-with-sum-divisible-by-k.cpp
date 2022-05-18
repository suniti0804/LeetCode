// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int, int> mp;
	    vector<int> mod(n);
	    int sum=0;
	    int res=0;
	    for(int i=0; i<n; i++)
	    {
	        sum+=arr[i];
	        mod[i]=((sum%k)+k)%k;
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	        if(mod[i]==0)
	           res=i+1;
	        else if(mp.find(mod[i])!=mp.end())
	           res=max(res, i-mp[mod[i]]);
	        else
	          mp[mod[i]]=i;
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
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends