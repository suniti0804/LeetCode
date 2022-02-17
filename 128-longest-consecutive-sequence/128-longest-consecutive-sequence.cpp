class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        int res=INT_MIN;
        unordered_map<int, int> mp;
        for(auto n:nums)
            mp[n]++;
        
        int i=0;
        while(i<nums.size())
        {
            int k=nums[i];
            int ctr=0;
            if(mp.find(k-1)==mp.end())
            {
                while(mp.find(k)!=mp.end())
                {
                    ctr++;
                    k++;
                }
            }
            res=max(res, ctr);
            i++;
        }
        
        return res;
        
    }
};