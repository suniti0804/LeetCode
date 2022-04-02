class Solution {
public:
    
    bool isCyclic(int v, vector<int> adj[], vector<int>& vis)
    {
        vis[v]=1;
        for(auto u:adj[v])
        {
            if(vis[u]==1)
                return true;
            
            if(vis[u]==0)
              if(isCyclic(u, adj, vis))
                  return true;
        }

        vis[v]=2;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& edges) 
    {
        vector<int> adj[n+1];
        for(auto e:edges)
            adj[e[0]].push_back(e[1]);
        
        vector<int> vis(n, 0);
        
        for(int i=0; i<n; i++)
            if(isCyclic(i, adj, vis))
                return false;
        
        return true;
        
        
    }
};