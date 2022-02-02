// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>adj)
	{
	    int e=adj.size();
	    vector<int> dist(n, INT_MAX); //or else can add any big number like
	    dist[0]=0;                              //1e8 to do addition directly
	    for(int i=0; i<n-1; i++)
	    {
	        for(int j=0; j<e; j++)
	        {
	            if(dist[adj[j][0]]!=INT_MAX&&dist[adj[j][0]]+adj[j][2]<dist[adj[j][1]])
	              dist[adj[j][1]]=dist[adj[j][0]]+adj[j][2];
	        }
	    }
	    
	    for(int j=0; j<e; j++)
	    {
	        if(dist[adj[j][0]]!=INT_MAX&&dist[adj[j][0]]+adj[j][2]<dist[adj[j][1]])
	          return 1;
	    }
	    
	    return 0;

	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends