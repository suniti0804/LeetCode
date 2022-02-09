class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) 
            mp[nums[i]]++;
        int res = 0;
        if(k == 0)
        {
            for(auto x: mp) 
                if(x.second > 1) 
                    res++;
        }
        else
        {
            for(auto x : mp)
            {
                if(mp.find(x.first + k) != mp.end()) 
                    res++; 
            }
        }
        return res;
    }
};