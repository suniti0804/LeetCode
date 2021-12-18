class Solution {
public:
    
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int &res) 
    {
        if(i<0||j<0||i>=grid1.size()||j>=grid1[0].size()) 
            return;
        if(grid2[i][j]==0) 
            return;
        
        if(grid1[i][j]==0&&grid2[i][j]==1)
            res = 0;
        
        grid2[i][j] = 0;
        
        dfs(grid1, grid2, i+1, j, res);
        dfs(grid1, grid2, i, j+1, res);
        dfs(grid1, grid2, i-1, j, res);
        dfs(grid1, grid2, i, j-1, res);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int ctr=0;
        int m=grid1.size();
        int n=grid1[0].size();
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid2[i][j]==1)
                {
                    int res=1;
                    dfs(grid1, grid2, i, j, res);
                    if(res)
                        ctr++;
                }    
            }
        }
        
        return ctr;
    }
};