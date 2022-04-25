class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        int lo=0, hi=n-1;
        
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