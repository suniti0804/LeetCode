// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool exist(vector<vector<char>>& board, int i, int j, string word, int idx)
    {
        int m=board.size();
        int n=board[0].size();
        
        if(idx==word.size())
           return true;
        
        if(i<0||i>=m||j<0||j>=n||idx>word.size()||board[i][j]=='#'||board[i][j]!=word[idx])
          return false;
          
        char ch=board[i][j];  
        board[i][j]='#';  
        idx++;
        
        if (exist(board, i+1, j, word, idx)||exist(board, i-1, j, word, idx)||
               exist(board, i, j+1, word, idx)||exist(board, i, j-1, word, idx))
               return true;
               
        board[i][j]=ch;  
        return false;
    }

    bool isWordExist(vector<vector<char>>& board, string word) 
    {
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j]==word[0])
                   if(exist(board, i, j, word, 0))
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