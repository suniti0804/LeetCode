class Solution {
public:
    int coinChange(vector<int>& coins, int n) 
    {
        vector<int> t(n+1, INT_MAX-1);
        
        t[0] = 0;
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 0; j < coins.size(); j++) 
            {
                if (coins[j] <= i) 
                  t[i] = min(t[i], t[i - coins[j]] + 1);
            }
        }
        return t[n] == INT_MAX - 1 ? -1 : t[n];
        
    }
};