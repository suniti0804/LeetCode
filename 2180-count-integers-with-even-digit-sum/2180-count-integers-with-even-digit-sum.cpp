class Solution {
public:
    int countEven(int num) 
    {
        int sum=0;
        int n=num;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        
        return (sum%2==0)?(n/2):(n-1)/2;
    }
};