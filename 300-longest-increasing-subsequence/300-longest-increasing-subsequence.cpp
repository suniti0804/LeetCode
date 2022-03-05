class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> t(n, 1);
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[i]>nums[j]&&t[i]<t[j]+1)
                    t[i]=t[j]+1;
            }
        }
        
        return *max_element(t.begin(), t.end());
        
    }
};