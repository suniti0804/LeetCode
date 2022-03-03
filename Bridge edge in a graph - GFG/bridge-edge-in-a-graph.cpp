// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    
    void dfs(int V, vector<int> adj[], int c, int d, int curr, vector<bool>& vis)
    {
        vis[curr]=1;
        for(auto it:adj[curr])
          if(!vis[it]&&(curr!=c||it!=d))
            dfs(V, adj, c, d, it, vis);
    }
    
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<bool> vis(V, false);
        dfs(V, adj, c, d, c, vis);
        
        return !vis[d];
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends