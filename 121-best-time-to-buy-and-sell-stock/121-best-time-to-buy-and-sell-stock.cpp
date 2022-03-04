class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int res=0;
        vector<int> right(n);
        
        right[n-1]=prices[n-1];
        for(int i=n-2; i>=0; i--)
            right[i]=max(right[i+1], prices[i]);
        
        for(int i=0; i<n-1; i++)
            res=max(res, right[i]-prices[i]);
        
        return res;
    }
};