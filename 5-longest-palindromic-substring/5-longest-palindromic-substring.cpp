class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int t[n][n];
        int start=0;
        
        int maxLen=1;
        
        memset(t, 0, sizeof(t));
        
        for(int i=0; i<n; i++)
            t[i][i]=true;
        
        for(int i=0; i<n-1; i++)
            if(s[i]==s[i+1])
            {
                t[i][i+1]=true;
                maxLen=2;
                start=i;
            }
        
        for(int k=3; k<=n; k++)
        {
            for(int i=0; i<n-k+1; i++)
            {
                int j=i+k-1;
                if(t[i+1][j-1]&&s[i]==s[j])
                {
                    t[i][j]=true;
                    if(k>maxLen)
                    {
                        maxLen=k;
                        start=i;
                    }
                }
            }
        }
        
        string ans="";
        for(int i=start; i<start+maxLen; i++)
            ans+=s[i];
        
        return ans;
    }
};