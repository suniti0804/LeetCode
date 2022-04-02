class Solution {
public:
    
    bool isCycle(int v, vector<int> adj[], vector<int>& vis, vector<int>& res)
	{
        vis[v]=1;
        for(auto u:adj[v])
        {
            if(vis[u]==1)
                return true;
            
            if(vis[u]==0)
              if(isCycle(u, adj, vis, res))
                  return true;
        }

        vis[v]=2;
        res.push_back(v);
        return false;
	}
    
    vector<int> findOrder(int num, vector<vector<int>>& edges) 
    {
        vector<int> res;
        vector<int> vis(num, 0);
    
        int n=edges.size();
        vector<int> adj[num+1]; //vector<vector<int>> adj(n+1);
        
        for(auto e:edges)
            adj[e[0]].push_back(e[1]);
	    
	    for(int i=0; i<num; i++)
	    {
	        if(!vis[i])
	          if(isCycle(i, adj, vis, res))
                  return {};
	    }
	    
	   return res;
    }
};