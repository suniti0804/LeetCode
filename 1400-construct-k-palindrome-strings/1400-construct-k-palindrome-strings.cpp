class Solution {
public:
    bool canConstruct(string s, int k) 
    {
        if(k>s.size())
            return false;
        unordered_map<int, int> mp;
        for(auto ch:s)
            mp[ch]++;
        int ctr=0;
        for(auto it:mp)
            if(it.second%2!=0)
                ctr++;
        return ctr<=k;
    }
};