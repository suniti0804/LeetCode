class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<int> t(m, grid[0][0]);
        
        for (int i=1; i<m; i++)
            t[i]=t[i-1]+grid[i][0]; 
        
        for (int j=1; j<n; j++) 
        {
            t[0]+=grid[0][j]; 
            for (int i=1; i<m; i++)
                t[i]=grid[i][j]+min(t[i-1], t[i]);
        }
        return t[m-1];
        
    }
};