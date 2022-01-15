class Solution {
public:
    
    /*int solve(int n, int k)
    {
        if(n==1)
            return 0;
        return (solve(n-1,k)+k)%n;
    }
    
    int findTheWinner(int n, int k)
    {
        return solve(n, k)+1;
    }  */
    
    int findTheWinner(int n, int k)
    {
        int res=0;
        for (int i=1; i<=n; i++)
            res=(res+k)%i;
        return res+1;
    }
};