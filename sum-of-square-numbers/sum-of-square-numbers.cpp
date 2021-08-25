class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        long int i = 0;
        long int j = sqrt(c);
        
        while(i <= j)
        {
            long int val = i*i + j*j;
            if(val == c)
                return true;
            else if(val < c)
                i++;
            else
                j--;
        }
        
        return false;
    }
};