class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int N = matrix.size();
        int M = matrix[0].size();
        
        int s = 0;
        int e = M - 1;
        
        while(s < N && e >= 0)
        {
            if(matrix[s][e] == target)
             return 1;
            else if(matrix[s][e] > target)
               e--;
            else
              s++;
        }
        
        return 0;
    }
};