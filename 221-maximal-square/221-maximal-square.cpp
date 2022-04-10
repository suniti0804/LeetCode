class Solution {
public:

    int maximalSquare(vector<vector<char>>& matrix)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<int> t(n+1);
        
        int res=0;
        int prev=0;
        
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int temp=t[j];
                if(matrix[i-1][j-1]=='1')
                {
                    t[j]=min(min(t[j-1], prev), t[j])+1;
                    res=max(res, t[j]);
                }
                else
                    t[j]=0;
                prev=temp;
            }
        }
        
        return res*res;
    }
    
    /*
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
    }  */
};