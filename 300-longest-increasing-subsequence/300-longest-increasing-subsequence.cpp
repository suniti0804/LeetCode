class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> lis(n, 1);
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[i]>nums[j]&&lis[i]<lis[j]+1)
                    lis[i]=lis[j]+1;
            }
        }
        
        return *max_element(lis.begin(), lis.end());
    }
};