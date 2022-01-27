class Solution {
public:
    string fractionToDecimal(int n, int d) 
    {
        if(n==0)
            return "0";
        string res="";
        if (n>0^d>0) 
            res+='-';
        
        long long num=abs(n);
        long long den=abs(d);
        
       res+=to_string(num/den);
       long long quotient=0;
       long long rem=0;
       unordered_map<long long,int> mp;
       if(num%den==0)
         return res;

       res+=".";
       rem=num%den;

       while(rem != 0)
        {
            if(mp.find(rem) != mp.end())
              {
                  int len = mp[rem];
                  res.insert(len, "(");
                  res += ")";
                  break;
              }
            
               mp[rem]=res.length();
               rem*=10;
               quotient=rem/den;
               res+=to_string(quotient);
               rem%=den;
             
        }

       return res;

    }
};