class Solution {
public:
    int maxProfit(int k, vector<int>& prices) 
    {
        int n = prices.size();
        if(n == 0)
            return 0;
        int t[k + 1][n];
        
        for(int i = 0; i <= k; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == 0 || j == 0)
                    t[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= k; i++)  //no of transactions
        {
            int maxi = INT_MIN;
            for(int j = 1; j < n; j++)   //jth day
            {
                maxi = max(maxi, t[i - 1][j - 1] - prices[j - 1]);
                
                t[i][j] = max(t[i][j - 1], prices[j] + maxi);
            }
        }
        
        return t[k][n - 1];
                
        
    }
};