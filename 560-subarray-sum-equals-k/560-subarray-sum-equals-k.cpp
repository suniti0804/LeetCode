class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int ctr=0;
        int sum=0;
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(sum==k)
                ctr++;
            if(mp.find(sum-k)!=mp.end())
                ctr+=mp[sum-k];
            mp[sum]++;
        }
        
        return ctr;
    }
};