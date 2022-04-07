class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        unordered_map<int, int> mp;
        for(auto ch:s1)
            mp[ch]++;
        int ctr=0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
                ctr++;
            if(ctr>2||mp[s2[i]]--<=0)
                return false;
        }
        return true;
    }
};