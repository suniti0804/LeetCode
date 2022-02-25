// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(vector<int> adj[], vector<bool>& vis, int v, int V, vector<int>& res)
    {
        if(v>=V)
          return;
        
        vis[v]=true;
        res.push_back(v);
        
        for(auto u:adj[v])
          if(!vis[u])
            dfs(adj, vis, u, V, res);
            
        return;    
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int> res;
        vector<bool> vis(V, 0);
        
        dfs(adj, vis, 0, V, res);
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends