class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int m = text1.length();
        int n = text2.length();
        
        int t[m + 1][n + 1];
        
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0 || j == 0)
                    t[i][j] = 0;
                else if(text1[i - 1] == text2[j - 1]) //else has to be used
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
       return t[m][n];
       //for longest common substring replace 
       //'max(t[i - 1][j], t[i][j - 1])' with 0 because in substring
       //continuous length is required.
        
    }
};