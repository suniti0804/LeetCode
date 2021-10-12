/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n)
    {
        int s=1;
        while(s<=n)
        {
            int mid=s+(n-s)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==-1)
                n=mid-1;
            else
                s=mid+1;
        }
        
        return -1;
        
    }
};