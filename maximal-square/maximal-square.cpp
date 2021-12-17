class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int res=INT_MIN;
        
        vector<vector<int>> t(m+1, vector<int>(n+1, 0));
        
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(matrix[i-1][j-1]=='1')
                    t[i][j]=min(t[i-1][j-1], min(t[i-1][j],t[i][j-1]))+1;
            
                res=max(res, t[i][j]);
            }     
        }
        
        return res*res;
    }
};