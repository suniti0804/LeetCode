class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) 
    {
        vector<vector<int>> matrix(n, vector(n,10001));
        for(auto i:edges)
            matrix[i[0]][i[1]]=matrix[i[1]][i[0]]=i[2];
        for(int i=0; i<n; i++)
            matrix[i][i]=0;
        
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                  matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
        
        int res=0,cities=INT_MAX;
                
         for(int i=0; i<n; i++)
         {
             int ctr=0;
             for(int j=0; j<n; j++)
                 if(matrix[i][j]<=distanceThreshold)
                     ctr++;
             if(ctr<=cities)
             {
                 cities=ctr;
                 res=i;
             }
         }
        
        return res;
        
    }
};