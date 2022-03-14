class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int ctr=1;
        int curr=nums[0];
        
        for(int i=1; i<n; i++)
        {
            if(nums[i]==curr)
                ctr++;
            else
                ctr--;
            if(ctr==0)
            {
                curr=nums[i];
                ctr=1;
            }
        }
        
        ctr=0;
        for(auto i:nums)
            if(i==curr)
                ctr++;
        return ctr>(n/2)?curr:-1;
    }
};