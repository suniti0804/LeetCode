class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
            return true;
        if(nums[0]==0)
            return false;
        
        int step=nums[0];
        int max_step=nums[0];
        
        for(int i=1; i<n; i++)
        {
            if(i==n-1)
                return true;
            max_step=max(max_step, i+nums[i]);
            if(i>=max_step)
                return false;
        }
        
        return true;
        
    }
};