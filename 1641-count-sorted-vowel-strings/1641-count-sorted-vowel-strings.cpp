class Solution {
public:
    int countVowelStrings(int n) 
    {
        int t[n][5];
        memset(t, 0, sizeof(t));
        for(int i=0; i<5; i++)
            t[0][i]=1; //string of size 1
        
        for(int i=1; i<n; i++)
        { //i length
            for(int j=0; j<5; j++)
            { //starting with j
                for(int k=j; k<5; k++)
                {
                    t[i][j]+=t[i-1][k];
                }
            }
        }
        
        int ans=0;
        for(int i=0; i<5; i++)
            ans+=t[n-1][i];
        
        return ans;
    }
};