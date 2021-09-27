class Solution {
public:
    //consider first string as prefix and keep on checking for each string.
    //cut out the portion which is not common
    
    string longestCommonPrefix(vector<string>& str) 
    {
        string res=str[0];
        for(int i=1; i<str.size(); i++)
        {
            string s=str[i];
            if(s=="")
                return "";
            int j;
            for(j=0; j<s.size()&&j<res.size();j++)
            {
                if(res[j]!=s[j])
                    break;
            }
            
            res=res.substr(0,j);
        }
        return res;
    }
};