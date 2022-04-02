class Solution {
public:
    
    //this method is based on cycle detection because out of three options
    //1.going to 1
    //2.falling to a cycle
    //3.going indfinitely
    //3rd option is ruled out as that is never going to happen.
     int next(int n)
    {
        int sum = 0;

        while(n != 0)
        {
            sum += pow(n % 10,2);
            n = n / 10;
        }

        return sum;
    }

    bool isHappy(int n) 
    {
        int slow = next(n);
        int fast = next(next(n));

        while(slow != fast)
        {
            slow = next(slow);
            fast = next(next(fast));
        }

        return fast == 1 ;
    }
};