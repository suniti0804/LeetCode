class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        
        string str="";
        
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='-')
                continue;
            
            if((str.size()%(k+1))==k)
                str+='-';
            
            str+=toupper(s[i]);
        }
        
        reverse(str.begin(), str.end());
        return str;
    }
};