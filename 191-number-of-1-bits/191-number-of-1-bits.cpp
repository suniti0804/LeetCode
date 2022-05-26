class Solution {
public:
    
    /*return __builtin_popcount(n);
        //Similarly you can use __builtin_popcountl(x) &          __builtin_popcountll(x) for long and long long data types.*/
    int hammingWeight(uint32_t n) 
    {
        int res=0;
        while(n)
        {
            n&=(n-1);
            res++;
        }
        return res;
        
    }
};