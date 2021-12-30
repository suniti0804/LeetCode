class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int mul=1;
        while(s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            mul=-1;
            i++;
        }
        
        else if(s[i]=='+')
            i++;
        
        long long res=0;
        while(s[i]>='0'&&s[i]<='9')
        {
            res=(res*10)+(s[i]-'0');
            if(res>INT_MAX)
                return mul==-1?INT_MIN:INT_MAX;
            i++;
        }
        
        return res*mul;
        
    }
};