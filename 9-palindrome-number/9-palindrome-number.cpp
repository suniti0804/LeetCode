class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        long long int rev=0;
        int temp=x;
        while(temp)
        {
            rev=rev*10+(temp%10);
            temp/=10;
        }
        
        return rev==x;
    }
};