class Solution {
public:
    
    bool isValid(vector<vector<int>>& grid, int i, int j)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        return i>=0&&i<m&&j>=0&&j<n&&grid[i][j]==0;
    }
    
    int maxDistance(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int, int>> q;
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]==1)
                    q.push({i,j});
        
        int ctr=0;
        
        while(!q.empty())
        {
            ctr++;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                if(isValid(grid, x+1, y))
                {
                    q.push({x+1, y});
                    grid[x+1][y]=1;
                }
                
                if(isValid(grid, x-1, y))
                {
                    q.push({x-1, y});
                    grid[x-1][y]=1;
                }
                
                if(isValid(grid, x, y+1))
                {
                    q.push({x, y+1});
                    grid[x][y+1]=1;
                }
                
                if(isValid(grid, x, y-1))
                {
                    q.push({x, y-1});
                    grid[x][y-1]=1;
                }
            }
        }
        
        return ctr>1?ctr-1:-1;
        
        
        
       
    }
};