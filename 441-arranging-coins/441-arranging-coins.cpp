class Solution {
public:
    int arrangeCoins(int n) {
         return (int)(-1+(sqrt(1+(8*(long)n))))/2;
    }
};