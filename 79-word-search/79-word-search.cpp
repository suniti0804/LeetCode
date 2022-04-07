class Solution {
public:
    
   bool dfs(vector<vector<char>>& board, int i, int j, string& word)
    {
        if(word.size() == 0)  //without this line error
            return true;
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || 
          board[i][j] != word[0])
            return false;
        
        char ch = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool res = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
        
        board[i][j] = ch;
        return res;
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(dfs(board, i, j, word))
                    return true;
            }
        }
        
        return false;
    }
};