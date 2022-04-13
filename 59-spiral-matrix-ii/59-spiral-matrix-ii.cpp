class Solution {
public:
    vector<vector<int>> generateMatrix(int N) 
    {
        int k = 0, l = 0;
        int val = 1;
        vector<vector<int>> res(N, vector<int>(N));
        int m = N, n = N;
        while(k < m && l < n)
        {
            for(int i = l; i < n; i++)
                res[k][i] = val++;
            k++;
            
            for(int i = k; i < m; i++)
                res[i][n - 1] = val++;
            n--;
            
            if(k < m)
            {
                for(int i = n - 1; i >= l; i--)
                    res[m - 1][i] = val++;
                m--;
            }
            
            if(l < n)
            {
                for(int i = m - 1; i >= k; i--)
                    res[i][l] = val++;
                l++;
            }
        }
        
        return res;
        
    }
};