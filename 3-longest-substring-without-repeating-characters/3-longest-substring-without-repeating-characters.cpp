class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> lastIndex(256,-1);
        int res=0;
        int j=0;

        for(int i=0; i<s.size(); i++)
        {
            j=max(j, lastIndex[s[i]]+1);
            res=max(res, i-j+1);
            lastIndex[s[i]]=i;
        }
        
        return res;
    }
};