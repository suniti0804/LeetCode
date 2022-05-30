class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long int dvd = abs(dividend); 
        long int dvs = abs(divisor);
        long int ans = 0;
        
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        
        while (dvd >= dvs) 
        {
            long int temp = dvs, q = 1;
            while (temp << 1 <= dvd) 
            {
                temp <<= 1;
                q <<= 1;
            }
            
            dvd -= temp;
            ans += q;
        }
        
        return sign * ans;
        
    }
};