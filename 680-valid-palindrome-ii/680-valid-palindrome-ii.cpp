class Solution {
public:
     //d=number of characters to be deleted
    bool solve(string &s, int lo, int hi, int d)
    {
        if(lo>=hi)
            return true;
        if(s[lo]==s[hi])
            return solve(s, lo+1, hi-1, d);
        else
            return(d>0)&&(solve(s, lo+1, hi, d-1)||solve(s, lo, hi-1, d-1));
    }
    
    bool validPalindrome(string s) 
    {
        return solve(s, 0, s.size()-1, 1);
    }
};