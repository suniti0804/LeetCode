class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<3)
            return 0;
        
        int res=0;
        int ctr=0;
        
        for(int i=2; i<nums.size(); i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                ctr++;
            else
                ctr=0;
            
            res+=ctr;
        }
        
        return res;
        
    }
};