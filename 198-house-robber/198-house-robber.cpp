class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0], nums[1]);
        vector<int> t(n+1);
        
        t[0]=nums[0];
        t[1]=max(nums[0], nums[1]);
        
        for(int i=2; i<n; i++)
            t[i]=max(nums[i]+t[i-2], t[i-1]);
        
        return t[n-1];
        
    }
};