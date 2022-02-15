// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

   bool dfs(vector<vector<char>>& board, int i, int j, string word, vector<vector<bool>>& vis, int idx)
   {
        int m=board.size();
        int n=board[0].size();
        
        if(idx==word.size())
          return true;
          
        if(i<0||i>=m||j<0||j>=n||board[i][j]!=word[idx]||vis[i][j]==true)
          return false;
          
        vis[i][j]=true;
        idx++;
          
        if(dfs(board, i+1, j, word, vis, idx)||dfs(board, i-1, j, word, vis, idx)||
           dfs(board, i, j+1, word, vis, idx)||dfs(board, i, j-1, word, vis, idx))
             return true;
             
        vis[i][j]=false;
        return false;
   }

    bool isWordExist(vector<vector<char>>& board, string word) {
        
        int m=board.size();
        int n=board[0].size();
        
        char ch=word[0];
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(board[i][j]==ch)
                  if(dfs(board, i, j, word, vis, 0))
                   return true;
            }
        }
        
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends