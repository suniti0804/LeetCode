class Solution {
public:
    
   bool dfs(vector<vector<char>>& board, string word, int i, int j, int idx) 
   {
        if(idx==word.size()) 
            return true; 
        
        if(i<0||i>=board.size()||j<0||j>=board[i].size()||board[i][j]!=word[idx]) 
            return false;
        
        board[i][j]='0';  //because character can't be reused
        idx++;
        
        bool status =   dfs(board, word, i+1, j, idx) ||  //down
                        dfs(board, word, i, j+1, idx) ||  //right
                        dfs(board, word, i-1, j, idx) ||  //up
                        dfs(board, word, i, j-1, idx);  //left
        
        board[i][j]=word[idx-1]; //restore the character
		
        return status;
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
        if(word=="") 
            return false;
        
        for(int i=0; i<board.size(); i++) 
        {
            for(int j=0; j<board[i].size(); j++) 
                if(board[i][j]==word[0]&&dfs(board, word, i, j, 0))
                    return true;
        }
        
        return false;
    }
};