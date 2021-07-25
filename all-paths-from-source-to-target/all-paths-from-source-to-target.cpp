class Solution {
public:
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& res, vector<int>& path, int src, int dest)
    {
        path.push_back(src);
        if(src == dest)
        {
            res.push_back(path);
            return;
        }
        
        for(auto v : graph[src])
        {
            dfs(graph, res, path, v, dest);
            path.pop_back();
        }
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        int n = graph.size();
        vector<vector<int>> res;
        vector<int> path;
        if(n == 0)
            return res;
        dfs(graph, res, path, 0, n - 1);
        return res;
        
    }
};