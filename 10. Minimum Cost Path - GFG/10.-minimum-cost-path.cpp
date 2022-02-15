// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

typedef pair<int, pair<int, int>> p;

int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};

class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
	
	bool isValid(int x, int y, int n)
	{
	    if(x<0||x>=n||y<0||y>=n)
	      return false;
	      
	    return true;  
	}
	
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        dist[0][0]=grid[0][0];
        
        priority_queue<p, vector<p>, greater<p>> pq;
        
        pq.push({grid[0][0], {0, 0}});
        
        while(!pq.empty())
        {
            auto k = pq.top();
            pq.pop();
            
            int i=k.second.first;
            int j=k.second.second;
            
            
            for(int t=0; t<4; t++)
            {
                int x=i+X[t];
                int y=j+Y[t];
                
                if(isValid(x, y, n))
                {
                    if(dist[x][y]>=dist[i][j]+grid[x][y])
                    {
                        dist[x][y]=dist[i][j]+grid[x][y];
                        pq.push({dist[x][y], {x, y}});
                    }    
                }    
            }
            
        }
        
        return dist[n-1][n-1];
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
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends