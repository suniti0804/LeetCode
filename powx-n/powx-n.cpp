class Solution {
public:
    /*double myPow(double x, int n) 
    {
        return pow(x, n);
    }  */
    
    
    //TC - O(log(n))
    //SC - O(1)
  /*  double myPow(double x, int n) 
    {
        double temp;
        if(n == 0)
            return 1;
        temp = myPow(x, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
        {
            if(n > 0)
                return x * temp * temp;
            else
                return (temp * temp) / x;
        }
    }   */
    
    //To handle the case where N=INTEGER_MIN we use a long (64-bit)             //variable. Below is solution:
    double myPow(double x, int n)
    {
        double ans = 1; // Initialize result
        long y = abs((long)n);
        while (y > 0) 
        {
            // If y is odd, multiply x with result
            if (y & 1)
                ans = ans * x;

            // y must be even now
            y = y >> 1; // y = n/2
            x = x * x; // Change x to x^2
        }
        return n < 0 ? 1/ans : ans;
    }
};