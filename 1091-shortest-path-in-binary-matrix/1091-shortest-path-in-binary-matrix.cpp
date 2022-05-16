class Solution {
public:
    
    vector<int> x_cord = {-1,-1,-1,0,0,1,1,1};
    vector<int> y_cord = {-1,0,1,-1,1,-1,0,1};
    
    bool isValid(vector<vector<int>>& grid, int x, int y)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(x<0||x>=m||y<0||y>=n)
            return false;
        return true;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(grid[0][0]||grid[m-1][n-1])
            return -1;
        grid[0][0]=1;
        queue<pair<int, int>> q;
        q.push({0, 0});
      
        while(!q.empty()&&!grid[m-1][n-1]) //important second condition
        {
            int x=q.front().first;
            int y=q.front().second;
            
            q.pop();

            for(int i=0; i<8; i++)
            {
                int a=x+x_cord[i];
                int b=y+y_cord[i];
                
                if(isValid(grid, a, b) && grid[a][b]==0)
                {
                    grid[a][b]=grid[x][y]+1;
                    q.push({a, b});
                }
            }
        }
        return grid[m-1][n-1]?grid[m-1][n-1]:-1;   
    }
};