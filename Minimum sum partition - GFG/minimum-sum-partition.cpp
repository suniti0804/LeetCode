// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  
	{
	    int sum=0;
	    for(int i=0; i<n; i++)
	       sum+=arr[i];
	       
	    vector<vector<bool>> t(n+1, vector<bool>(sum+1, false));    
	       
	    for(int i=0; i<=n; i++)
	    {
	        for(int j=0; j<=sum; j++)
	        {
	            if(i==0)
	              t[i][j]=false;
	            if(j==0)
	              t[i][j]=true;
	        }
	    }    
	    
	    for(int i=1; i<=n; i++)
	    {
	        for(int j=1; j<=sum; j++)
	        {
                if(arr[i-1]<=j)
                  t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                else
                  t[i][j]=t[i-1][j];
	        }
	    }
	    
	    for(int i=sum/2; i>=0; i--)
	      if(t[n][i])
	        return sum-2*i;
	        
	   return -1;     
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
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends