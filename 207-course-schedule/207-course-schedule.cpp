class Solution {
public:
    
    bool isCyclic(int u, vector<int> adj[], vector<int>& visited)
    {
        if(visited[u]==1)
            return true;

        else if(visited[u]==0)
        {
            visited[u]=1;
            for(auto v:adj[u])
                if(isCyclic(v, adj, visited))
                    return true;
        }
        
        visited[u]=2;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& edges) 
    {
        vector<int> adj[n+1];
        
        for(auto e:edges)
            adj[e[0]].push_back(e[1]);
        
        vector<int> visited(n, 0);
        
        for(int i=0; i<n; i++)
        {
            if(isCyclic(i, adj, visited))
                return false;
        }
        
        return true;
    }
};