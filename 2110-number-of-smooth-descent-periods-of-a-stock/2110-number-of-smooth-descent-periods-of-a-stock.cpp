class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) 
    {
        /*int n=prices.size();
        long long res=0;
        
        int i=0;
        
        while(i<n)
        {
            long long start=i;
            long long len=1;
            i++;
            while(i<n&&prices[i]==prices[i-1]-1)
            {
                len++;
                i++;
            }
            
            res+=((len)*(len+1)/2);
        }
        
        return res;  */
        
        long long res=0;
        long long temp=0;
        
        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i]==prices[i-1]-1)
            {
                temp++;
                res+=temp;
            }
            else
                temp=0;
        }
        
        return res+prices.size();
        
    }
};