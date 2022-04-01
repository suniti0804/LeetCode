class Solution {
public:
    
    int solve(string s, int l, int r, int k)
    {
        vector<int> mp(26, 0);
        for(int i=l; i<=r; i++)
            mp[s[i]-'a']++;
        
        bool flag=true;
        for(auto i:mp)
            if(i>0&&i<k)
                flag=false;
        
        if(flag)
            return r-l+1;
        
        int i=l, res=0;
        
        for(int j=l; j<=r; j++)
        {
            if(mp[s[j]-'a']>0&&mp[s[j]-'a']<k)
            {
                res=max(res, solve(s, i, j-1, k));
                i=j+1;
            }
        }
        
        return max(res, solve(s, i, r, k));
    }
    
    int longestSubstring(string s, int k) 
    {
        int n=s.size();
        return solve(s, 0, n-1, k);
    }
};