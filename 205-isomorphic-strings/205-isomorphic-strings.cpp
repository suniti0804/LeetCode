class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<int, int> mp;
        vector<bool> vis(256, 0);
        for(int i=0; i<s.size(); i++)
        {
            if((mp.find(s[i])!=mp.end())&&(mp[s[i]]!=t[i]))
                return false;
            
            if(mp.find(s[i])==mp.end()&&vis[t[i]]==true)
                return false;
            
            mp[s[i]]=t[i];
            vis[t[i]]=true;
        }
        
        return true;
        
    }
};