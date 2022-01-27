class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) 
    {
        string res="";
        if(numerator==0)
            return "0";
        if(numerator>0^denominator>0)
            res+='-';
        long num=abs(numerator);
        long den=abs(denominator);
        unordered_map<long, int> mp;
        
        res+=to_string(num/den);
        if(num%den==0)
            return res;
        res+='.';
        
        long rem=num%den;
        
        while(rem)
        {
            if(mp.find(rem)!=mp.end())
            {
                res.insert(mp[rem], "(");
                res+=')';
                break;
            }
            
            mp[rem]=res.size();
            rem*=10;
            res+=to_string(rem/den);
            rem%=den;
        }
        
        return res;
        
    }
};