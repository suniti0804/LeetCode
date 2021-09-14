class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
      /*int n = prices.size();
        int right[n];
        right[n - 1] = prices[n - 1];
        
        for(int i = n - 2; i >= 0; i--)
          right[i] = max(right[i + 1], prices[i]);
        
        int ans = INT_MIN;
        for(int i = 0; i < n; i++)
            ans = max(ans, right[i] - prices[i]);
        
        return ans;   */
        
        //using constant space
        
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for(int i = 0; i < prices.size(); i++)
        {
            min_price = min(min_price, prices[i]);
            max_profit = max(max_profit, prices[i] - min_price);
        }
        
        return max_profit;
  
    }
};