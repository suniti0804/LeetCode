class Solution {
public:
    double myPow(double x, int n) 
    {
        double res=1;
        long y=abs((long)(n));
        
        while(y)
        {
            if(y&1)
                res*=x;
            x=x*x;
            y>>=1;
        }
        
        return n>0?res:(1/res);
    }
};