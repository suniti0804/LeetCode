class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>> res(m, vector<int>(n, 0));
        
        for(int i=0; i<m*n; i++)
        {
            int prev_x=i%n;
            int prev_y=i/n;
            
            int new_x=(prev_x+k)%n;
            int new_y=(prev_y+(prev_x+k)/n)%m;
            
            res[new_y][new_x]=grid[prev_y][prev_x];
        }
        
        return res;
    }
};