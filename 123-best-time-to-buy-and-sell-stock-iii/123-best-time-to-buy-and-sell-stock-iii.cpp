class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        if(n==1)
            return 0;
        vector<int> profit1(n, 0), profit2(n, 0);
        
        int min_price=prices[0];
        for(int i=1; i<n; i++)
        {
            min_price=min(min_price, prices[i]);
            profit1[i]=max(profit1[i-1], prices[i]-min_price); 
        }
        
        int max_price=prices[n-1];
        for(int i=n-2; i>=0; i--)
        {
            max_price=max(max_price, prices[i]);
            profit2[i]=max(profit2[i+1], max_price-prices[i]);
        }
        
        int res=INT_MIN;
        for(int i=0; i<n; i++)
            res=max(res, profit1[i]+profit2[i]);
        
        return res;
    }
};