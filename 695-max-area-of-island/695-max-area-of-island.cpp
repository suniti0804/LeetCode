class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int i, int j, int& ans)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(i>=m||i<0||j>=n||j<0||grid[i][j]==0)
            return;
        
        ans++;
        
        grid[i][j]=0;
        
        dfs(grid, i+1, j, ans);
        dfs(grid, i, j+1, ans);
        dfs(grid, i-1, j, ans);
        dfs(grid, i, j-1, ans);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int res=0;
        
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    int ans=0;
                    dfs(grid, i, j, ans);
                    res=max(res, ans);
                }
            }
        }
        
        return res;
        
    }
};