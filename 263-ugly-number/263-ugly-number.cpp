class Solution {
public:
    bool isUgly(int n) 
    {
        while(n&&n%2==0)
            n/=2;
        while(n&&n%3==0)
            n/=3;
        while(n&&n%5==0)
            n/=5;
        
        return n==1;
        
    }
};