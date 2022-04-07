class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char, int> mp;
        for(auto ch:s)
            mp[ch]++;
        bool flag=false;
        int res=0;
        for(auto i:mp)
        {
            if(i.second&1)
            {
                if(!flag)
                {
                    res++;
                    flag=true;
                }
                
                i.second--;
                res+=i.second;
                mp[i.first]=0;
            }
            else if(i.second%2==0)
            {
                res+=i.second;
                mp[i.first]=0;
            }
        }
        return res;
    }
};