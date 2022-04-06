class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> res;
        int m=matrix.size(), n=matrix[0].size();
        
        int i=0, j=0;
        
        while(i<m&&j<n)
        {
            for(int k=j; k<n; k++)
                res.push_back(matrix[i][k]);
            i++;
            
            for(int k=i; k<m; k++)
                res.push_back(matrix[k][n-1]);
            n--;
            
            if(i<m)
            {
                for(int k=n-1; k>=j; k--)
                    res.push_back(matrix[m-1][k]);
                m--;
            }
            
            if(j<n)
            {
                for(int k=m-1; k>=i; k--)
                    res.push_back(matrix[k][j]);
                j++;
            }
        }
        
        return res;
        
    }
};