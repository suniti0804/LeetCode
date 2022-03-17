class Solution {
public:
    
    int val(char ch)
    {
        if(ch=='I')
            return 1;
        if(ch=='V')
            return 5;
        if(ch=='X')
            return 10;
        if(ch=='L')
            return 50;
        if(ch=='C')
            return 100;
        if(ch=='D')
            return 500;
        if(ch=='M')
            return 1000;
        return 0;
    }
    
    int romanToInt(string s) 
    {
        int res=0;
        int i=0;
        while(i<s.size())
        {
            int a=val(s[i]);
            int b=val(s[i+1]);
            
            if(a<b)
            {
                res+=b-a;
                i+=2;
            }    
            else
            {
                res+=a;
                i++;
            }    
            
        }
        return res;
        
    }
};