class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<string, int> row, col, box;
        
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]!='.')
                {
                    char val=board[i][j];
                    string r=to_string(i)+val;
                    string c=to_string(j)+val;
                    string b=to_string(i/3)+to_string(j/3)+val;
                    
                    if(row[r]++>0||col[c]++>0||box[b]++>0)
                        return false;
                }
            }
        }
        
        return true;
        
    }
};