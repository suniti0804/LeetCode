// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>& k,vector<int>& t,int n)
	{
	    int X[8]={1, 1, 2, 2, -1, -1, -2, -2};
        int Y[8]={-2, 2, 1, -1, 2, -2, -1, 1};
	    
	    int steps=0;
	    queue<pair<int, int>> q;
	    q.push({k[0], k[1]});
	    
	    vector<vector<bool>> vis(n+1, vector<bool>(n+1, false));

	    vis[k[0]][k[1]]=true;
	    
	    while(!q.empty())
	    {
	        int size=q.size();
	        
	        for(int k=0; k<size; k++)
	        {
	            auto u=q.front();
	            q.pop();
	            int i=u.first;
	            int j=u.second;
	            
	            if(i==t[0]&&j==t[1])
	              return steps;
	           
    	       for(int k=0; k<8; k++)
    	       {
    	           int x = i+X[k];
    	           int y = j+Y[k];
    	           
    	           if(x>0&&x<=n&&y>0&&y<=n&&vis[x][y]==false)
    	           {
    	               vis[x][y]=true;
    	               q.push({x, y});
    	           }
    	       }

	        }
	        
	         steps++;
	    }
	    
	    return steps;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends