class Solution {
public:
    int countSubstrings(string s) 
    {
        int n=s.size();
        vector<vector<int>> t(n, vector<int>(n, 0));
        int res=0;
     
        for(int gap=0; gap<n; gap++)
        {
            for(int i=0, j=gap; j<n; i++, j++)
            {
                if(gap==0)
                {
                    t[i][j]=1;
                    res++;
                }
                
                else if(gap==1)
                {
                    if(s[i]==s[j])
                    {
                        t[i][j]=1;
                        res++;
                    }
                }
                else if(s[i]==s[j] && t[i+1][j-1]==1)
                {
                    t[i][j]=1;
                    res++;
                }
            }
        }
        
        return res;
    }
};