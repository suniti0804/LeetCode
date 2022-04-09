class Solution {
public:
    int maxProfit(int k, vector<int>& prices) 
    {
        int n=prices.size();
        /*(k>=n/2) //if k>=n/2,then can make maximum number of transactions
        { 
            int profit = 0;
            for (int i = 1; i < prices.size(); i++)
                if (prices[i] > prices[i - 1]) profit += prices[i] - prices[i - 1];
                    return profit;
        }  */        
       vector<int> buy(k+1,INT_MAX);
       vector<int> sell(k+1,0);

        for (auto price:prices) 
        {
            for (int i=1; i<=k; i++) 
            {
                buy[i]=min(buy[i], price-sell[i-1]);
                sell[i]=max(sell[i], price-buy[i]);
            }
        }
        
        return sell[k];
    }
};