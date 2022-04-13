class Solution {
public:
    
    int dfs(int root, vector<vector<int>>& v, vector<int>& informTime)
    {
        int time=0;
        for(auto u:v[root])
            time=max(time, dfs(u, v, informTime));
        
        return informTime[root]+time;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) 
    {
        vector<vector<int>> v(n);
        //v.resize(n);
        for(int i=0; i<n; i++)
            if(manager[i]!=-1)
                v[manager[i]].push_back(i);
        
        return dfs(headID, v, informTime);
        
        
    }
};