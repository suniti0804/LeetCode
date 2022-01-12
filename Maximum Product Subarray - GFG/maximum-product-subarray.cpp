// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) 
	{
	    /*long long res=arr[0];
	    
	    for(int i=0; i<n; i++)
	    {
	        long long prod=arr[i];
	        for(int j=i+1; j<n; j++)
	        {
	            res=max(res, prod);
	            prod*=arr[j];
	        }
	        
	        res=max(res, prod);
	    }
	    
	    return res;  */
	    
	    long long minVal=arr[0];
	    long long maxVal=arr[0];
	    long long res=arr[0];
	    
	    for(int i=1; i<n; i++)
	    {
	        if(arr[i]<0)
	          swap(minVal, maxVal);
	          
	        minVal=min<long long>(arr[i], minVal*arr[i]);
	        maxVal=max<long long>(arr[i], maxVal*arr[i]);
	        
	        res=max(res, maxVal);
	    }
	    
	    return res;
	}  
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends