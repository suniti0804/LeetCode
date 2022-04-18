class Solution {
public:
    int distinctSubseqII(string s) 
    {
        int n=s.size();
        vector<int> t(n+1);
        vector<int> lastIndex(256, -1);
        t[0]=1;
        
        for(int i=1; i<=n; i++)
        {
            t[i]=(2*t[i-1])%1000000007;
            if(lastIndex[s[i-1]]!=-1)
                t[i]=(t[i]-t[lastIndex[s[i-1]]]+1000000007)%1000000007;
            lastIndex[s[i-1]]=i-1;
        }
        
        return (t[n]-1)%1000000007;
        
    }
};