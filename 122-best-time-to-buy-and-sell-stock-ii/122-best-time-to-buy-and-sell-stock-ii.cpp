class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int ans=0;
        int i=0;
        while(i<n-1)
        {
            while(i<(n-1)&&prices[i+1]<=prices[i])
                i++;
            if(i==n-1)
                break;
            int buy=i;
            i++;
            while(i<n&&prices[i]>=prices[i-1])
                i++;
            int sell=i-1;
            
            ans+=prices[sell]-prices[buy];
            
        }
        
        return ans;
    }
};