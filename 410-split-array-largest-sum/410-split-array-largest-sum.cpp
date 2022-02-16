class Solution {
public:
    
    bool isValid(int mid, vector<int>& nums, int m)
    {
        int ctr=1;
        int curr=0;
        
        for(auto n:nums)
        {
            if(curr+n<=mid)
                curr+=n;
            else
            {
                curr=n;
                ctr++;
            }
            
            if(ctr>m)
                return false;
        }
        
        return true;
    }
    
    int splitArray(vector<int>& nums, int m) 
    {
        int res=0;
        int s=*max_element(nums.begin(), nums.end());
        int e=0;
        for(auto n:nums)
            e+=n;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isValid(mid, nums, m))
            {
                res=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        
        return res;
        
    }
};