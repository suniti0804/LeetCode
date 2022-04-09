class Solution {
public:
    int integerBreak(int n) 
    {
        if(n<=2)
            return 1;
        
        vector<int> t(n+1, 0);
        
        t[1]=0;
        t[2]=1;
        
        for(int i=3; i<=n; i++)
          for(int j=1; j<i; j++)
              t[i]=max(t[i], max(j*(i-j), j*t[i-j]));
        
        return t[n];
        
    }
};