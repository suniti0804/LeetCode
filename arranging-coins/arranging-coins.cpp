class Solution {
public:
    int arrangeCoins(int n) 
    {
        /*int level = 1;
        for (long sum = 0; sum <= n; level++) 
            sum += level;
        return max(level - 2, 0);   */
        
        return (int)(sqrt(2 * (long)n + 0.25) - 0.5);
        
    }
};