class Solution {
public:
    bool isMatch(string s, string p) 
    {
        int m = s.size(), n = p.size();
        vector<vector<bool>> t(m + 1, vector<bool>(n + 1, false));
        t[0][0] = true;
        
        for (int i = 0; i <= m; i++) 
        {
            for (int j = 1; j <= n; j++) 
            {
                if (p[j - 1] == '*') 
                    t[i][j]=t[i][j-2]||(i&&t[i-1][j]&&(s[i-1]==p[j-2]||p[j-2]=='.'));
                else 
                    t[i][j]=i&&t[i-1][j-1]&&(s[i-1]==p[j-1]||p[j-1]=='.');
                
            }
        }
        
        return t[m][n];
        
    }
};