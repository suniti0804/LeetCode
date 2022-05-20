class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        if (grid[0][0] == 1) 
            return 0;
        
        grid[0][0] = 1;
        
        int n = grid.size();
        int m = grid[0].size();
        
        for (int i = 1; i < n; i++)
            if(grid[i][0] == 0 && grid[i-1][0] == 1)
                grid[i][0]=1;
             else 
                 grid[i][0]=0;

        for (int i = 1; i < m; i++)
            if(grid[0][i] == 0 && grid[0][i-1] == 1)
                grid[0][i] = 1;
             else
                 grid[0][i] = 0;

        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
               if(grid[i][j] == 1)
                  grid[i][j]=0;
               else
                  grid[i][j]=grid[i-1][j]+grid[i][j-1];
        
        return grid[n-1][m-1];
    }
};