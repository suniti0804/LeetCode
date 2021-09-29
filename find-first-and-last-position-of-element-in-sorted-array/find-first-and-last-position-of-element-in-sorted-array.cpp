class Solution {
public:
    
    int lower_bound(vector<int> nums, int k)
    {
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]<k)
                s=mid+1;
            else
                e=mid-1;
            
        }
        
        return s;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int l=lower_bound(nums, target);
        int r=lower_bound(nums, target+1)-1;
        
        if (l < nums.size() && nums[l] == target)
           return {l, r};
        else
           return {-1, -1};
        
    }
};