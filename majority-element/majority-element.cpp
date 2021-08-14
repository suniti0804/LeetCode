class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1 || n == 2)
            return nums[0];
        
        int count = 1, res = nums[0];
        
        for(int i = 1; i < n; i++)
        {
            if(nums[i] == res)
                count++;
            else
                count--;
            
            if(count == 0)
            {
                res = nums[i];
                count = 1;
            }
        }
        
        count = 0;
        for(int i = 0; i < n; i++)
            if(nums[i] == res)
                count++;
        
        if(count > n/2)
            return res;
        
        return -1;
    }
};