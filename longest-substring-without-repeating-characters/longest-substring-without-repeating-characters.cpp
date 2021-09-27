class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.empty())
            return 0;
        int res=INT_MIN;
        int len=0;
        unordered_map<int, bool> mp;
        int i = 0, j = 0; 
        while(i < s.size())
        {
            if(mp[s[i]]==false)
            {
                mp[s[i]]=true;
                len++;
                i++;
            }
            else
            {
                mp[s[j]]=false;
                len--;
                j++;
            }
            res = max(res, len);
        }
        return res;
    }
};