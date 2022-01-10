class Solution {
public:
    string addBinary(string a, string b) 
    {
        int carry = 0;
        string s = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        while(i >= 0 || j >= 0 || carry)
        {
            int sum = 0;
            if(i >= 0)
            {
                sum += (a[i] - '0');
                i--;
            }     
            if(j >= 0)
            {
                sum += (b[j] - '0');
                j--;
            }
            
            sum += carry;
            s += to_string(sum%2);
            carry = sum/2;
        }
        
        reverse(s.begin() , s.end());
        return s;
    }
};