// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& vis)
    {
        int m=grid.size();
        
        if(i>=m||i<0||j>=m||j<0||vis[i][j]==true||grid[i][j]==0)
          return;
        
        vis[i][j]=true;
        
        dfs(grid, i+1, j, vis);
        dfs(grid, i-1, j, vis);
        dfs(grid, i, j+1, vis);
        dfs(grid, i, j-1, vis);
        
        return;
        
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int src_x=0;
        int src_y=0;
        int dest_x=0;
        int dest_y=0;
        
        int n=grid.size();
        
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==1)
                {
                    src_x=i;
                    src_y=j;
                }
                
                if(grid[i][j]==2)
                {
                    dest_x=i;
                    dest_y=j;
                }
            }
        }
        
        dfs(grid, src_x, src_y, vis);
        return vis[dest_x][dest_y]; 
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends