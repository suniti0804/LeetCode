class Solution {
public:
    long long smallestNumber(long long num) 
    {
        if(num==0)
            return 0;
        string str=to_string(abs(num));
        if(num>=0)
            sort(str.begin(), str.end());
        else
            sort(str.begin(), str.end(), greater<int>());
        
       
        if(num>=0)
        {
            int j=str.find_first_not_of('0');
            swap(str[0], str[j]);
        }
        
        return num<0?-1*stol(str):stol(str);
        
        
    }
};