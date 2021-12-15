class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        
        int t[m+1][n+1];
        
        for(int i=0; i<=m; i++)
            for(int j=0; j<=n; j++)
               if(i==0||j==0)
                    t[i][j]=0;
        
        t[0][1]=1;
        
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(grid[i-1][j-1]!=1)
                   t[i][j]=t[i-1][j]+t[i][j-1];
                else
                    t[i][j]=0;
            }
        }
        
        return t[m][n];
        
    }
};