class Solution {
public:
    int numDecodings(string s) 
    {
        if(s[0]=='0')
            return 0;
        int n=s.size();
        vector<int> t(n+1, 0);
        
        t[0]=t[1]=1;
        
        for(int i=2; i<=n; i++)
        {
            if(s[i-1]>'0')
                t[i]=t[i-1];  //same as t[i]+=t[i-1] as t[i]=0
            if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<='6'))
                t[i]+=t[i-2];
        }
        
        return t[n];
        
    }
};