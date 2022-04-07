class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        unordered_map<int, set<int>> mp;
        
        for(auto num:nums1)
            mp[num].insert(1);
        for(auto num:nums2)
            mp[num].insert(2);
        for(auto num:nums3)
            mp[num].insert(3);
        
        vector<int> res;
        for(auto it:mp)
            if(it.second.size()>=2)
                res.push_back(it.first);
        return res;
    }
};