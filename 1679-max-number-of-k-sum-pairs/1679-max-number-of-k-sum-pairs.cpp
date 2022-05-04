class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int res=0;
        unordered_map<int, int> mp;
        for(auto k:nums)
            mp[k]++;
        
        for(int i=0; i<n; i++)
        {
            if(mp[k-nums[i]]>0&&mp[nums[i]]>0)
            {
                mp[k-nums[i]]--;
                mp[nums[i]]--;
                if(mp[k-nums[i]]>=0&&mp[nums[i]]>=0)
                   res++;
            }
        }
        return res;
        
    }
};