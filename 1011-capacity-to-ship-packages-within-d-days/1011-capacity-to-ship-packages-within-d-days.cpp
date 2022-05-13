class Solution {
public:
    
    bool isValid(vector<int>& weights, int mid, int days)
    {
        int sum=0, ctr=1;
        for(int i=0; i<weights.size(); i++)
        {
            sum+=weights[i];
            if(sum>mid)
            {
                sum=weights[i];
                ctr++;
            }
        }
        
        return ctr<=days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int res;
        int lo=*max_element(weights.begin(), weights.end());
        int hi=0;
        for(auto i:weights)
            hi+=i;
        
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(isValid(weights, mid, days))
            {
                res=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        
        return res;
        
    }
};