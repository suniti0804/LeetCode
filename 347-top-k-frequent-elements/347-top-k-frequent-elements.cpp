class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> res;
        unordered_map<int, int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        vector<int> freq[nums.size()+1];
        
        for(auto i:mp)
            freq[i.second].push_back(i.first);
        
        for(int i=nums.size(); i>=0; i--)
        {
            for(auto x:freq[i])
            {
                res.push_back(x);
                k--;
            }
            
            if(k==0)
                break;
        }
        
        return res;
        
    }
};