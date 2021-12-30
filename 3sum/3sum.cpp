class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        if(nums.size()<3)
            return {};
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                {
                    j++;
                    continue;
                }
                
                if(k<nums.size()-1&&nums[k]==nums[k+1])
                {
                    k--;
                    continue;
                }
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }    
                else if(sum>0)
                    k--;
                else
                    j++;
            }
        }
        
        return res;
    }
};