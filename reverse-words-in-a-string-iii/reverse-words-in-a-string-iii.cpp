class Solution {
public:
    string reverseWords(string s) 
    {
        string res = "";
        int i = 0;
        string temp = "";
        while(i<s.size())
        {
            if(s[i]!=' ')
                temp += s[i];
            else
            {
                for(int i=temp.size()-1; i >= 0; i--)
                    res += temp[i];
                
                res += " ";
                temp = "";
            }
            i++;
        }
        
        for(int i=temp.size()-1; i >= 0; i--)
            res += temp[i];
        
        return res;
    }
};