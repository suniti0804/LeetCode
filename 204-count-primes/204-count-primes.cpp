class Solution {
public:
    int countPrimes(int n) 
    {
        if(n==0)
            return 0;
        vector<int> isPrime(n+1, 1);
        
        isPrime[0]=isPrime[1]=0;
        
        for(int i=2; i*i<=n; i++)
        {
            if(isPrime[i]==1)
            {
                for(int j=2*i; j<=n; j+=i)
                    isPrime[j]=false;
            }
        }
        
        for(int i=1; i<=n; i++)
            isPrime[i]+=isPrime[i-1];
        
        return isPrime[n-1];
        
    }
};