// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void dfs(vector<vector<int>>& grid, int i, int j, int& ctr)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]==0)
           return;
           
        ctr++;
        grid[i][j]=0;
        
        int dx[]={-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[]={-1, 0, 1, -1, 1, -1, 0, 1};
        
        for(int k=0; k<8; k++)
          dfs(grid, i+dx[k], j+dy[k], ctr);
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
                    int ctr=0;
                    dfs(grid, i, j, ctr);
                    res=max(res, ctr);
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