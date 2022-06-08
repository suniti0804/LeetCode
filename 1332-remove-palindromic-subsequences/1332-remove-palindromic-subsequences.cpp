class Solution {
public:
     int removePalindromeSub(string s) 
     {
        int n=s.size();
        bool flag=true;
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                flag=false;
                break;
            }
            i++;
            j--;
        }
         
        if(flag)
            return 1;
        else
            return 2;   
    }
};