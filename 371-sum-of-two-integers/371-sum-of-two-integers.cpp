class Solution {
public:
    int getSum(int a, int b) 
    {
        int sum = a;
        uint32_t carry = b;
        while(carry){
            sum = a^carry;
            carry = (a&carry)<<1;
            a = sum;
        }
        return sum;
    }
};