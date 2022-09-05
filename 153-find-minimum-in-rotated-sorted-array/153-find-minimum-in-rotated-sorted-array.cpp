class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        int lo=0, hi=n-1;
        
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[n-1])
                lo=mid+1;
            else
                hi=mid-1;
        }
        return nums[lo];
        
    }
};