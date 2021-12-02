class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        int ctr=0;
        for(auto i:mp)
            ctr += (i.second*(i.second-1))/2;
        
        return ctr;
    }
};