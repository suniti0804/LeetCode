class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> t(n+1, INT_MAX);
        
        t[0]=0;
        int count = 1;
        
        while(count*count <= n) 
        {
            int s = count*count;
            for(int i=s; i<=n; i++) 
                t[i] = min(t[i-s] + 1,t[i]);

            count++;
        }
    
        return t[n];
    }
};