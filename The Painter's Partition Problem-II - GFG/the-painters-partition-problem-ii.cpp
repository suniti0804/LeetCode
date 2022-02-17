// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    bool isValid(long long mid, int arr[], int n, int k)
    {
        long long curr=0;
        long long ctr=1;
        
        for(int i=0; i<n; i++)
        {
            curr+=arr[i];
            if(curr>mid)
            {
                curr=arr[i];
                ctr++;
            }
            if(ctr>k)
              return false;
        }
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        long long res=-1;
        long long s=*max_element(arr, arr+n);
        long long e=0;
        
        for(int i=0; i<n; i++)
           e+=arr[i];
        
        while(s<=e)
        {
            long long mid = s+(e-s)/2;
            if(isValid(mid, arr, n, k))
            {
                res=mid;
                e=mid-1;
            }
            else
                s=mid+1;
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
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends