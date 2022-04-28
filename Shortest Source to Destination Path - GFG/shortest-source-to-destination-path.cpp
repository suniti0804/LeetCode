// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

bool isValid(vector<vector<int>>& A, int x, int y, vector<vector<bool>>& vis)
{
    int m=A.size();
    int n=A[0].size();
    
    if(x<0||x>=m||y<0||y>=n||A[x][y]==0||vis[x][y]==1)
      return false;
    vis[x][y]=true;  
    return true;  
}

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) 
    {
        int ctr=0;
        if(A[0][0]==0)
          return -1;
        vector<vector<bool>> vis(N, vector<bool>(M, false));
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0]=true;
        
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                auto t=q.front();
                q.pop();
                
                int x=t.first;
                int y=t.second;
                
                if(x==X&&y==Y)
                  return ctr;
                  
                if(isValid(A, x-1, y, vis))
                {
                    q.push({x-1, y});
                    //vis[x-1][y]=true; 
                }    
                if(isValid(A, x+1, y, vis))
                {
                    q.push({x+1, y});
                    //vis[x+1][y]=true;
                }    
                if(isValid(A, x, y-1, vis))
                {
                    q.push({x, y-1});
                    //vis[x][y-1]=true;
                }    
                if(isValid(A, x, y+1, vis))
                {
                    q.push({x, y+1});
                    //vis[x][y+1]=true;
                }    
            }
            ctr++;
        }
        
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}  // } Driver Code Ends