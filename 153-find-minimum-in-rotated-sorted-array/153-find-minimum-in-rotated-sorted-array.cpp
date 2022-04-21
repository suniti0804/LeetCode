class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==1)
            return nums[0];
        if(nums[0]<nums[n-1])
            return nums[0];
        
        int lo=0;
        int hi=n-1;
        
        int ans = INT_MAX;
        while(lo<=hi)
        {
            
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=nums[0])
                lo=mid+1;
            
            else
            {
                ans=min(ans, nums[mid]);
                hi=mid-1;
            }
        }
        
        return ans;
    }
};