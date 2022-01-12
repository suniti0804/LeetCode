class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int n=nums.size();
        
        int ctr=0;
        int prod=1;
        
        for(int i=0, j=0; j<nums.size(); j++)
        {
            prod*=nums[j];
            while(i<=j&&prod>=k)
                prod/=nums[i++];
            
            ctr+=j-i+1;
        }
        
        return ctr;
    }
};