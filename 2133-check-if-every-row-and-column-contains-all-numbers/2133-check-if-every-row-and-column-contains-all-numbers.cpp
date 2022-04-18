class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        unordered_map<string, int> row, col;
        int n=matrix.size();
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int val=matrix[i][j];
                string r=to_string(i)+" "+to_string(val);
                string c=to_string(j)+" "+to_string(val);
                if(row[r]++>0||col[c]++>0)
                    return false;
            }
        }
        
        return true;
        
    }
};