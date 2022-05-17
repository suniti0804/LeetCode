// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	//So if any sub-array sum from index i’th to j’th is divisible by k 
	//then we can saya[0]+…a[i-1] (mod k) = a[0]+…+a[j] (mod k)
	long long subCount(long long arr[], int N, long long k)
	{
	    long long ctr=0;
	    vector<int> mod(k, 0);
	    long long sum=0;
	    
	    for(int i=0; i<N; i++)
	    {
	        sum+=arr[i];
	        long long rem=((sum%k)+k)%k;
	        mod[rem]++;
	    }
	    
	    for(int i=0; i<k; i++)
	        if(mod[i]>1)
	           ctr+=(mod[i]*(mod[i]-1))/2;
	    
	    ctr+=mod[0];
	    return ctr;
	}



};


// { Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends