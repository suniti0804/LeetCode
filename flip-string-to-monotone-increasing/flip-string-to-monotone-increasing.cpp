class Solution {
public:
    int minFlipsMonoIncr(string s) 
    {
        int n = s.size();
        int flip_zero = 0, count_one = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                flip_zero++;
            else
                count_one++;
            
            flip_zero = min(flip_zero, count_one);
        }
        
        return flip_zero;
        
        
    }
};