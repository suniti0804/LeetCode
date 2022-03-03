class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int res=0;
        int n=pref.size();
        
        for(auto str:words)
            if(str.substr(0,n)==pref)
                res++;
        
        return res;
        
    }
};