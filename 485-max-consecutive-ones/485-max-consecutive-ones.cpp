class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n=nums.size();
        int res=0;
        int ctr=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==1)
                ctr++;
            else
                ctr=0;
            res=max(res, ctr);
        }
        return res;
        
    }
};