class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int start=lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        int end=lower_bound(nums.begin(), nums.end(), target+1)-nums.begin();
        
        if(start<nums.size()&&nums[start]==target)
            return {start,end-1};
        return {-1,-1};
        
        
    }
};