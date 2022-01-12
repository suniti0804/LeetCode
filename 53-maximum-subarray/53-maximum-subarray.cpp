class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int res=INT_MIN;
        int curr_max=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            curr_max=max(nums[i], curr_max+nums[i]);
            res=max(res, curr_max);
        }
        
        return res;
        
    }
};