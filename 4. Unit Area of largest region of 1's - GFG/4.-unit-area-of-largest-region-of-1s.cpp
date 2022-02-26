// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void dfs(int i, int j, vector<vector<int>>& grid, int& a)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(i<0||i>=m||j<0||j>=n||grid[i][j]!=1)
          return;
          
        a++;
        grid[i][j]=0;
        
        dfs(i+1, j, grid, a);
        dfs(i-1, j, grid, a);
        dfs(i+1, j+1, grid, a);
        dfs(i+1, j-1, grid, a);
        dfs(i, j+1, grid, a);
        dfs(i, j-1, grid, a);
        dfs(i-1, j+1, grid, a);
        dfs(i-1, j-1, grid, a);
        
        
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        int res=0;
        
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                int ctr=0;
                if(grid[i][j]==1)
                  dfs(i, j, grid, ctr);
                  
                res=max(res, ctr);  
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends