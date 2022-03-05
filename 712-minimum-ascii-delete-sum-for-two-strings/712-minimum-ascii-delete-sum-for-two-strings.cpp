class Solution {
public:
    int minimumDeleteSum(string s1, string s2) 
    {
        int sum1=0, sum2=0;
        for(auto ch:s1)
            sum1+=ch;
        for(auto ch:s2)
            sum2+=ch;
        
        int m=s1.size(), n=s2.size();
        int t[m+1][n+1];
        
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0||j==0)
                    t[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    t[i][j]=t[i-1][j-1]+s1[i-1];
                else
                    t[i][j]=max(t[i-1][j], t[i][j-1]);
            }
        }
        
        return sum1+sum2-2*t[m][n];
    }
};