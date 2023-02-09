//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    int dp[m][n];

    for(int i=0;i<m;i++)

    {
        for(int j=0;j<n;j++)
        {

           if(i==0 && j==0)
               dp[i][j]=1;

           else
           {

               int up=0;
               int left=0;
               
               if(i>0)
                  up=dp[i-1][j];
        
               if(j>0) 
                  left=dp[i][j-1];
                
               dp[i][j]= up+left;
           }
        }
    }
    return dp[m-1][n-1];
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends