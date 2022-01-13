class Solution {
public:
   /* int numSquares(int n) 
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
    }  */
    
    int is_square(int n)
    {  
        int temp = (int) sqrt(n);  
        return temp * temp == n;  
    }  
    
    int numSquares(int n)
    {  
        while (n%4== 0)
            n>>=2;  
        
        if (n%8== 7) 
            return 4;  
        if(is_square(n)) 
            return 1;  
        
        for(int i=1; i<=sqrt(n); i++) 
            if (is_square(n-i*i)) 
                return 2;  
        
        return 3;  
    }  
};