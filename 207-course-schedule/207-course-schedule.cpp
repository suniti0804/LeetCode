class Solution {
public:
    
    bool isCyclic(int u, vector<int> adj[], vector<int>& vis)
    {
        if(vis[u]==1)
            return true;
        else if(vis[u]==0)
        {
            vis[u]=1;
            for(auto v:adj[u])
                if(isCyclic(v, adj, vis))
                    return true;
        }
       
        
        vis[u]=2;
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