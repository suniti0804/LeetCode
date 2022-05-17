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
	    int mod[n], res = 0;
	    int curr_sum = 0;
	    
	    for(int i=0; i<n; i++)
	     {
	         curr_sum+=arr[i];
	         mod[i]=((curr_sum%k)+k)%k;
	     }
	     
    	for (int i=0; i<n; i++) 
        {
            if(mod[i]==0) 
                res=i+1; 
             
            else if(mp.find(mod[i])==mp.end()) 
                mp[mod[i]]=i; 
                  
            else
                
                if(res<(i-mp[mod[i]])) 
                    res=i-mp[mod[i]];             
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