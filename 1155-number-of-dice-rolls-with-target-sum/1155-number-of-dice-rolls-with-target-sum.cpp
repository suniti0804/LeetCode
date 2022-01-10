class Solution {
public:
    
    
    //recursion+memoization
    /*int numRollsToTarget(int n, int k, int target) 
    {
        int t[31][1001];
        memset(t, -1, sizeof(t));
        
        if(target==0&&n==0)
            return 1;
        if(target<0||n==0)
            return 0;
        
        if(t[n][target]!=-1)
            return t[n][target];
        
        int res=0;
        for(int i=1; i<=k; i++)
            res+=numRollsToTarget(n-1, k, target-i);
        
        return t[n][target]=res;
        
    }  */
    
    int numRollsToTarget(int n, int f, int target) 
    {
        int m=1000000007;
        vector<vector<int>> t(n+1, vector<int>(target+1, 0));
        
        t[0][0]=1;
        
        for(int i=1; i<=n; i++) //number of throws
        {
            for(int j=1; j<=target; j++)  //current sum
            {
                for(int k=1; k<=f; k++)     //face values
                {
                    if(k<=j)
                        t[i][j]=(t[i][j]%m+t[i-1][j-k]%m)%m;
                }
            }
        }
        return t[n][target];
    }
    
};