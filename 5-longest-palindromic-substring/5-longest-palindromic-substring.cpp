class Solution {
public:
    
    string longestPalindrome(string str)
    {
        int n=str.size();
        if(n<=1)
            return str;
        int maxLen=1, start=0;
        
        //odd length
        for(int i=0; i<n-1; i++)
        {
            int l=i, r=i;
            while(l>=0&&r<n&&str[l]==str[r])
            {
                l--;
                r++;
            }
            
            int len=r-l-1;
            if(len>maxLen)
            {
                maxLen=len;
                start=l+1;
                //end=r-1;
            }
        }
        
        //even length
        for(int i=0; i<n-1; i++)
        {
            int l=i, r=i+1;
            while(l>=0&&r<n&&str[l]==str[r])
            {
                l--;
                r++;
            }
            
            int len=r-l-1;
            if(len>maxLen)
            {
                maxLen=len;
                start=l+1;
                //end=r-1;
            }
        }
        
        return str.substr(start, maxLen);
    } 
    /*
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
        
        return str.substr(start, maxLen);
    } 
    */
};