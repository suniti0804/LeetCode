class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans = 1; // Initialize result
        long y=abs((long)n);
        while (y > 0) 
        {
            // If y is odd, multiply x with result
            if (y & 1)
                ans = ans * x;
            y/=2;
            x = x * x; // Change x to x^2
        }
        return n < 0 ? 1/ans : ans;
    }
};