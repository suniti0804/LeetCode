class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans = 1; // Initialize result
        long y=abs((long)n);
        while(y>0) 
        {
            // If y is odd, multiply x with result
            if(y&1)
                ans=ans*x;
            x=x*x; // Change x to x^2
            y>>=1;  //right shift, divided by 2
        }
        return n<0?1/ans:ans;
    }
};