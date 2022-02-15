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
        int n=grid.size();
        int m=grid[0].size();
        
        if(i>=n||i<0||j>=m||j<0||grid[i][j]==0)
          return;
          
        a+=1;
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
    
    int findMaxArea(vector<vector<int>>& grid) 
    {
        int res=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    int a=0;
                    dfs(i, j, grid, a);
                    res=max(res, a);
                }
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