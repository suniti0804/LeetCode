class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        
        while(s < e)
        {
            int mid = s + (e-s)/2;
            if((mid%2 == 0 && nums[mid] == nums[mid+1]) || (mid%2 != 0 && nums[mid] == nums[mid-1]))
                s = mid+1;
            else
                e = mid; 
        }
        
        return nums[s];
        
    }
};