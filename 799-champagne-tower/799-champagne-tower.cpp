class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) 
    {
        double t[101][101]={0.0};
        t[0][0]=poured;
    
        for (int i=0; i<100; i++)
        {
            for (int j=0; j<=i; j++)
            {
                if (t[i][j]>=1)
                {
                    t[i+1][j]+=(t[i][j]-1)/2.0;
                    t[i+1][j+1]+=(t[i][j]-1)/2.0;
                    t[i][j]=1;
                }
            }
        }
        return t[query_row][query_glass];
        
    }
};