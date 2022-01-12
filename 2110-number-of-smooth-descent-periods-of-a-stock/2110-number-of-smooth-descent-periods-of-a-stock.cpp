class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) 
    {
        int n=prices.size();
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
        
        return res;
        
    }
};