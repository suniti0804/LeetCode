class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int res=0;
        vector<int> map(256, -1);
        int j=0;
        
        for(int i=0; i<s.size(); i++)
        {
            j=max(j, map[s[i]]+1);
            res=max(res, i-j+1);
            map[s[i]]=i;
        }
        
        return res;
        
    }
};