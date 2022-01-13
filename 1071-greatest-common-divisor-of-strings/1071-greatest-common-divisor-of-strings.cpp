class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        int a=str1.size();
        int b=str2.size();
        
        if(str1+str2!=str2+str1)  //nice logic!!
            return "";
        
        return str1.substr(0, __gcd(a,b));
        
    }
};