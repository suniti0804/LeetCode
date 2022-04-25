class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int curr_sum=0, res=INT_MAX;
        int start=0;
        
        for(int i=0; i<n; i++)
        {
            curr_sum+=nums[i];
            while(curr_sum>=target)
            {
                res=min(res, i-start+1);
                curr_sum-=nums[start++];
            }
        }
        
        return res==INT_MAX?0:res;
        
    }
};