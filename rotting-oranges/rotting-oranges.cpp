class Solution {
public:
         bool isSafe(vector<vector<int>>& grid, int m, int n, int i, int j)
    {
        if(i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == 1)
           return true;
        
        return false;   
    }
    
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int res = -1; //initialised to -1 since after each step we increment                         the time by 1 and initially all rotten oranges                               started at 0.
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
             {
                 if(grid[i][j] == 2)
                  {
                      q.push({i, j});
                      grid[i][j] = -1;
                  }
             }
        }
        
        while(!q.empty())
        {
            int ctr = q.size();
            for(int k = 0; k < ctr; k++)
            {
                //auto it = q.front();
                int i = q.front().first;
                int j = q.front().second;
                
                if(isSafe(grid, m, n, i, j + 1))
                {
                    q.push({i, j + 1});
                    grid[i][j + 1] = -1;
                }
                
                if(isSafe(grid, m, n, i + 1, j))
                {
                    q.push({i + 1, j});
                    grid[i + 1][j] = -1;
                }
                
                if(isSafe(grid, m, n, i, j - 1))
                {
                    q.push({i, j - 1});
                    grid[i][j - 1] = -1;
                }
                
                if(isSafe(grid, m, n, i - 1, j))
                {
                    q.push({i - 1, j});
                    grid[i - 1][j] = -1;
                }
                
                q.pop();
            }
            
            res++;
        }
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                  return -1;
            }
        }
            
    
       return res == -1 ? 0 : res;        
    }
};