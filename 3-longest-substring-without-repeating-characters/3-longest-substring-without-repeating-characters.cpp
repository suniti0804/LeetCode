class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int res=0;
        vector<int> index(256, -1);
        int j=0;
        
        for(int i=0; i<s.size(); i++)
        {
            j=max(j, index[s[i]]+1);
            res=max(res, i-j+1);
            index[s[i]]=i;
        }
        return res;
        
    }
};