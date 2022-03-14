class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_price=INT_MAX;
        int max_profit=INT_MIN;
        
        for(int i=0; i<prices.size(); i++)
        {
            min_price=min(min_price, prices[i]);
            max_profit=max(max_profit, prices[i]-min_price);
        }
        
        return max_profit;
        
    }
};