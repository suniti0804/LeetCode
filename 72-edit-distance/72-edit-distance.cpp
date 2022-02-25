class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        
        int t[m+1][n+1];
        
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0)
                    t[i][j]=j;
                else if(j==0)
                    t[i][j]=i;
                else if(word1[i-1]==word2[j-1])
                    t[i][j]=t[i-1][j-1];
                else
                    t[i][j]=1+min({t[i-1][j], t[i][j-1], t[i-1][j-1]});
            }
        }
        
        return t[m][n];
    }
};