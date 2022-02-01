// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges)
	{
	    int e = edges.size();
	    int dis[n];
	    for(int i = 0; i < n; i++)
	       dis[i] = INT_MAX;
	    dis[0] = 0;      //when this line was not included it was WA
	       
	    for(int i = 0; i < n - 1; i++)
	    {
	        for(int j = 0; j < e; j++)
	        {
	            if(dis[edges[j][0]] != INT_MAX && 
	            dis[edges[j][0]] + edges[j][2] < dis[edges[j][1]])
	            dis[edges[j][1]] = dis[edges[j][0]] + edges[j][2];
	        }
	    }
	    
	    for(int i = 0; i < e; i++)
	    {
	        int x = edges[i][0];
            int y = edges[i][1];
            int weight = edges[i][2];
            if (dis[x] != INT_MAX && dis[x] + weight < dis[y])
              return 1;
                
	    }
	    
	    return 0;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends