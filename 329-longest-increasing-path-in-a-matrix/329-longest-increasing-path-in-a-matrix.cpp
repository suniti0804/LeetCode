class Solution {
public:
    
    int t[200][200];
    
    int dfs(vector<vector<int>>& mat, int i, int j, int prev)
    {
        int n=mat.size();
        int m=mat[0].size();
        
        if(i<0 || j<0 || i>=n || j>=m || mat[i][j]<=prev) 
            return 0;
        
        if(t[i][j]) 
            return t[i][j];
        
        int l=dfs(mat, i, j+1, mat[i][j]);
        int r=dfs(mat, i, j-1, mat[i][j]);
        int u=dfs(mat, i-1, j, mat[i][j]);
        int d=dfs(mat, i+1, j, mat[i][j]);
        
        return t[i][j]=1+max({l, r, u, d});       
    }
    
    int longestIncreasingPath(vector<vector<int>>& mat) 
    {
        int ctr=0;
        for(int i=0; i<mat.size(); i++)
            for(int j=0; j<mat[0].size(); j++)
                ctr=max(ctr, dfs(mat, i, j, -1));            
        return ctr;
    }
    
};