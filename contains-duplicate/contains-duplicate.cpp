class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int, bool> mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]==true)
                return true;
            mp[nums[i]]=true;
        }
        
        return false;
    }
};