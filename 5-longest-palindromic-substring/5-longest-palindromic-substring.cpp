class Solution {
public:
    string longestPalindrome(string str) 
    {
        int n=str.size();
        vector<vector<int>> t(n, vector<int>(n, 0));
        int start=0, maxLen=1;
        
        for(int i=0; i<n; i++)
            t[i][i]=1;
        for(int i=0; i<n-1; i++)
        {
            if(str[i]==str[i+1])
            {
                t[i][i+1]=1;
                start=i;
                maxLen=2;
            }
        }
        for(int k=3; k<=n; k++)
        {
            for(int i=0; i<n-k+1; i++)
            {
                int j=i+k-1;
                if(t[i+1][j-1]==1&&str[i]==str[j])
                {
                    t[i][j]=1;
                    if(k>maxLen)
                    {
                        maxLen=k;
                        start=i;
                    }
                }
            }
        }
        
        string res="";
        for(int i=start; i<start+maxLen; i++)
            res+=str[i];
        return res;
    }
};