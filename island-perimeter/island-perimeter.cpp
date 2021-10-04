class Solution {
public:
    
        int peri(vector<vector<int>>&mat, int i, int j, int R, int C)
        {
            int count = 0;
            // UP
            if (i > 0 && mat[i - 1][j])
                count++;
            // LEFT
            if (j > 0 && mat[i][j - 1])
                count++;
            // DOWN
            if (i < R-1 && mat[i + 1][j])
                count++;
            // RIGHT
            if (j < C-1 && mat[i][j + 1])
                count++;

            return count;
        }
 
    
    int islandPerimeter(vector<vector<int>>& mat) 
    {
        int perimeter = 0;
        int R=mat.size();
        int C=mat[0].size();
        
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                if (mat[i][j])
                    perimeter += (4 - peri(mat, i ,j, R, C));

        return perimeter;

    }
};