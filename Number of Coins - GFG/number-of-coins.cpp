// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    //sort(coins, coins+M);
	    vector<int> t(V+1, INT_MAX);
	    t[0]=0;
	    for(int i=1; i<=V; i++)
	    {
	        for(int j=0; j<M; j++)
	        {
	            if(coins[j]<=i)
	            {
	                int res=t[i-coins[j]];
	                if(res!=INT_MAX&&res+1<t[i])
	                  t[i]=res+1;
	            }
	        }
	    }
	    
	    return t[V]==INT_MAX?-1:t[V];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends