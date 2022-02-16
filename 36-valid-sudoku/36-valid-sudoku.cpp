class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& matrix) {
        unordered_map<string, int> row, box, col;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(matrix[i][j]!='.')
                {
                    char ch=matrix[i][j];
                    string r=to_string(i)+ch;
                    string c=to_string(j)+ch;
                    string b=to_string(i/3)+to_string(j/3)+ch;

                    if(row.find(r)!=row.end()||col.find(c)!=col.end()||
                      box.find(b)!=box.end())
                        return false;

                    row[r]++;
                    col[c]++;
                    box[b]++;
                }
            }
        }

        return true;
    }
};