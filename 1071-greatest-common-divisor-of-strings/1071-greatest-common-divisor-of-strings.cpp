class Solution {
public:
    
    bool solve(string a, string b)
    {
        int i=0;
        int k=0;
        while(i<a.size())
        {
            if(k==b.size())
                k=0;
            while(a[i]==b[k]&&i<a.size()&&k<b.size())
            {
                i++;
                k++;
            }
            
            if(k!=b.size())
                return false;
            
        }
        
        return true;
    }
    
    string gcdOfStrings(string str1, string str2) 
    {
        int a=str1.size();
        int b=str2.size();
        
        int len=__gcd(a,b);
        
        string res=str1.substr(0,len);
        
        if(solve(str1, res)&&solve(str2, res))
            return res;
        else
            return "";
        
    }
};