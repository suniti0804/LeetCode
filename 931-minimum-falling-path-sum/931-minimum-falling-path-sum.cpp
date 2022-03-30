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
                {
                    t[i][j]=min(t[i-1][j-1]+matrix[i][j], t[i-1][j]+matrix[i][j]);
                    t[i][j]=min(t[i-1][j+1]+matrix[i][j], t[i][j]);
                }
                else if(j==0)
                    t[i][j]=min(t[i-1][j+1]+matrix[i][j], t[i-1][j]+matrix[i][j]);
                
                else if(j==n-1)
                    t[i][j]=min(t[i-1][j-1]+matrix[i][j], t[i-1][j]+matrix[i][j]);
                
            }
        }
            
            int ans=INT_MAX;
            for(auto &x:t[n-1])
                    ans=min(ans,x);
            
            return ans;

        
    }
};