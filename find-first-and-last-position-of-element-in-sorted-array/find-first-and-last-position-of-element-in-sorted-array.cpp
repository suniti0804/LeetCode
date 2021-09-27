class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int s=0;
        int e=nums.size();
        
        int l,r;
        
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]>=target)
                e=mid;
            else
                s=mid+1;
        }
        
        l=s;
        s=0;
        e=nums.size();
        
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]>target)
                e=mid;
            else
                s=mid+1;
        }
        
        r=s;
        if(l==r)
            return {-1,-1};
        else
            return {l,r-1};
    }
};