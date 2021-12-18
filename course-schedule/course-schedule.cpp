class Solution {
public:
    
    bool iscycle(vector<int> adj[],vector<int> &visited,int id)
    {
        if(visited[id]==1)
            return true;
        if(visited[id]==0)
        {
            visited[id]=1;
            for(auto edge : adj[id])
                if(iscycle(adj, visited, edge))
                    return true;
        }
        
        visited[id]=2;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) 
    {
        vector<int> adj[n];
        for(auto edge : pre)
            adj[edge[1]].push_back(edge[0]);
        
        vector<int> visited(n, 0);
        
        for(int i=0; i<n; i++)
            if(iscycle(adj, visited, i))
                return false;
        
        return true;
    }
};