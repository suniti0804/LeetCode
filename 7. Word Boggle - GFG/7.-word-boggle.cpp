// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:


    bool dfs(vector<vector<char>>& grid, int i, int j, string str, vector<vector<bool>>& vis, int idx)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(idx==str.size())
          return true;
        
        if(i<0||i>=m||j<0||j>=n||grid[i][j]!=str[idx]||vis[i][j]==true)
          return false;
        
        vis[i][j]=true;
        idx++;
        
        if(dfs(grid, i+1, j, str, vis, idx) || dfs(grid, i-1, j, str, vis, idx)
        || dfs(grid, i, j+1, str, vis, idx) || dfs(grid, i, j-1, str, vis, idx)
        || dfs(grid, i+1, j+1, str, vis, idx) || dfs(grid, i+1, j-1, str, vis, idx)
        || dfs(grid, i-1, j+1, str, vis, idx) || dfs(grid, i-1, j-1, str, vis, idx))
           return true;
           
        vis[i][j]=false;
        return false;
          
    }
    
    bool exist(vector<vector<char>>& board, string str)
    {
        int m=board.size();
        int n=board[0].size();
        
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int idx=0;
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j]==str[idx])
                   if(dfs(board, i, j, str, vis, idx))
                      return true;
            }
        }
        
        return false;
    }

	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	   
	    vector<string> res;
	    for(auto str:dictionary)
	    {
	        if(exist(board, str))
	          res.push_back(str);
	    }
	    
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}
  // } Driver Code Ends