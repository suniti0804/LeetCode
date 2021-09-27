class Solution {
public:
    int myAtoi(string str) 
    {
        long long res=0;
        int i=0;
        while(str[i]==' ')
            i++;
        if(i==str.size())
            return 0;
        int sign=1;
        if(str[i]=='-')
        {
            sign=-1;
            i++;
        }    

        else if(str[i]=='+')
        {
            sign=1;
            i++;
        }

        while(i<str.size())
        {
            if(str[i]==' '||str[i]<'0'||str[i]>'9')
                return res*sign;
            res=res*10+(str[i]-'0');
            if(res>INT_MAX)
            {
                if(sign==-1)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
            i++;
        }
        
        return res*sign;
        
        
    }
};