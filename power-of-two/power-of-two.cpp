class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        //1. doing AND:  O(1)
         /* if(n <= 0)
              return false;
          return n && (!(n & n - 1));  */
        
        //2. taking log: log2(n)
        /*if(n <= 0)
            return false;
        return floor(log2(n)) == ceil(log2(n)); */
        
        //3. count set bits : O(number of set bits)
        /*if(n <= 0)
            return false;
        int count = 0;
        while(n)
        {
            n &= n - 1;
            count++;
        }
        
        if(count == 1)
            return true;
        return false;  */
        
        //4. using while loop : O(log2n)
        if(n <= 0)
            return false;
    
        while(n != 1)
        {
            if(n % 2 != 0)
                return false;
            n /= 2;
        }
        
        return true;
        
        
    }
};