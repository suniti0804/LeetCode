class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
          int buy=INT_MAX, sell=0, prev_sell=0, prev_buy;
          for(auto price:prices) 
          {
              buy=min(buy, price-sell);
              sell=max(sell, price-buy-fee);
          }
        
          return sell;

    }
};