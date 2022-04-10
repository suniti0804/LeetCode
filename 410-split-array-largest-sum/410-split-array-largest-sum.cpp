class Solution {
public:
    
    bool isValid(vector<int>& nums, int mid, int m)
    {
        int sum=0;
        int ctr=1;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(sum>mid)
            {
                sum=nums[i];
                ctr++;
            }
        }
        
        return ctr<=m;
    }
    
    int splitArray(vector<int>& nums, int m) 
    {
        int n=nums.size();
        int res=0;
        int lo=*max_element(nums.begin(), nums.end());
        int hi=0;
        for(auto n:nums)
            hi+=n;
        
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(isValid(nums, mid, m))
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