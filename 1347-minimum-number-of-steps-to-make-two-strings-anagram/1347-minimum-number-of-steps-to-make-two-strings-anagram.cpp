class Solution {
public:
    int minSteps(string s, string t) 
    {
        unordered_map<int, int> mp;
        for(auto ch:s)
            mp[ch]++;
        for(auto ch:t)
            mp[ch]--;
        
        int res=0;
        for(auto it:mp)
            res+=abs(it.second);
        
        return res/2;
        
    }
};