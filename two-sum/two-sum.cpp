class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                res.push_back(mp[target - nums[i]]);
                res.push_back(i);
                return res;
            }
                
            mp.insert({nums[i], i});
        }
        
        return {};
        
    }
};