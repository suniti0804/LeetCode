class Solution {
public:
     //as the size is n + 1 and there are n elements then by pigeonhole 
     //it can be proven that atleast one element is repeated.
    int findDuplicate(vector<int>& nums) 
    {
        if(nums.size() <= 1)
            return -1;
        int slow = nums[0];
        int fast = nums[nums[0]];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        fast = 0;
        while (fast != slow)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return fast;

    }
};