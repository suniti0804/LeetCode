class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& matrix) 
    {
        unordered_map<string, int> row, col, box;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(matrix[i][j]!='.')
                {
                    int num=matrix[i][j]-'0';
                    string r=to_string(num)+to_string(i);
                    string c=to_string(num)+to_string(j);
                    string b=to_string(num)+to_string(i/3)+to_string(j/3);

                    if(row[r]++>0||col[c]++>0||box[b]++>0)
                        return false;
                }
               
            }
        }

        return true;
        
    }
};