class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n=strs.size();
        sort(strs.begin(), strs.end());
        string a=strs[0];
        string b=strs[n-1];
        
        int i=0;
        while(i<a.size())
        {
            if(a[i]==b[i])
                i++;
            else
                break;
        }
        
        return a.substr(0, i);
        
        
    }
};