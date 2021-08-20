class Solution {
public:
    //both are accepted. second one is from comments section
    /*bool isValidSudoku(vector<vector<char>>& mat) 
    {
       unordered_map<string, int> r, c, b;
       for(int i = 0; i < 9; i++)
       {
           for(int j = 0; j < 9; j++)
           {
               char x = mat[i][j];
               if(x != '.')
               {
                   string row = to_string(i);
                   row.push_back(x);
                   string col = to_string(j);
                   col.push_back(x);
                   string box = to_string(i/3) + to_string(j/3);
                   box.push_back(x);
                   
                   if(r.find(row) != r.end() || c.find(col) != c.end() ||
                   b.find(box) != b.end())
                     return false;
                   
                   r[row]++;
                   c[col]++;
                   b[box]++;
               }
               
            }
       }
       
       return true;
    }  */
    
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int row[9][9] = {0}, col[9][9] = {0}, box[9][9] = {0};
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1;
                    int k = i / 3 * 3 + j / 3;
                    //check then increment
                    if(row[i][num]++ || col[j][num]++ || box[k][num]++)
                        return false;
                }
        } 
        return true;
    }
};