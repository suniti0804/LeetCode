class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string res=strs[0];
        
        for(int i=1; i<strs.size(); i++)
        {
            string s=strs[i];
            if(s=="")
                return "";
            int j=0;
            while(j<s.size()&&j<res.size()&&s[j]==res[j])
                j++;
            res=res.substr(0, j);
        }
        return res;
    }
};