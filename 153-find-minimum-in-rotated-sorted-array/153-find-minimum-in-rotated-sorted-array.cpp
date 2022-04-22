class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n = nums.size();
        if(nums[0]<nums[n-1])
            return nums[0];
        
        int lo=0;
        int hi=n-1;
        
        while(lo<hi)
        {
            
            int mid=lo+(hi-lo)/2;
            if(nums[n-1]<nums[mid])
                lo=mid+1;
            
            else
                hi=mid;
        }
        
        return nums[lo];
    }
};