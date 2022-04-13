class Solution {
public:
    bool dfs(vector<vector<int>>& adj, vector<int>&color, int x, int c)
    {
        color[x]=c;
        for(auto i:adj[x])
        {
            if(color[i]==-1)
            {
                if(!dfs(adj, color, i, !color[x]))
                    return false;
            }
            
            else if(color[i]==color[x]) //adjacent nodes can't have same color
                    return false;
        }
        
        return true;
    }
    bool isBipartite(vector<vector<int>> adj)
    {
        int V = adj.size();
        vector<int>color(V, -1);
        for(int i = 0; i < V; i++)
        {
            if(color[i]==-1)
            {
                if(!dfs(adj, color, i, 0))
                  return false;
            }
        }
        return true;
    }
};