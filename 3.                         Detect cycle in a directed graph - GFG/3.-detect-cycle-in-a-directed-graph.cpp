// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(vector<int> adj[], int u, vector<bool>& vis, vector<int>& rec)
    {
        vis[u]=true;
        rec[u]=true;
        
        for(auto v:adj[u])
        {
            if(!vis[v]&&dfs(adj, v, vis, rec))
              return true;
            else if(rec[v]==true)
              return true;
        }
        
        rec[u]=false;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> rec(V, 0);
        vector<bool> vis(V, 0);
        
        for(int i=0; i<V; i++)
        {
            if(!vis[i]&&dfs(adj, i, vis, rec))
              return true;
        }
        
        return false;
        
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends