class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        vector<vector<int>> t(n, vector<int>(n, INT_MAX));
        for(int i=0;i<n;i++)
            t[0][i]=matrix[0][i];
        
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j>0&&j<n-1)
                   t[i][j]=min(t[i][j], matrix[i][j]+min(t[i-1][j-1], min(t[i-1][j], t[i-1][j+1])));
                   
                else if(j==0)
                    t[i][j]=matrix[i][j]+min(t[i-1][j+1], t[i-1][j]);
                
                else if(j==n-1)
                    t[i][j]=matrix[i][j]+min(t[i-1][j-1], t[i-1][j]);
            }
        }
            

        return *min_element(t[n-1].begin(), t[n-1].end());
         
    }
};