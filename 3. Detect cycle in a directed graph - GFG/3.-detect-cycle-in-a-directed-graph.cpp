// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool cyclic(int u, vector<int> adj[], vector<int>& vis)
    {
        if(vis[u]==1)
          return true;
          
        if(vis[u]==0)
        {
            vis[u]=1;
            for(auto v:adj[u])
              if(cyclic(v, adj, vis))
                return true;
        }
        
        vis[u]=2;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> vis(V, 0);
        for(int i=0; i<V; i++)
        {
            if(cyclic(i, adj, vis))
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