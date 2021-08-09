class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string res = "";
        while(i >= 0 || j >= 0 || carry)
        {
            long sum = 0;
            if(i >= 0)
            {
                sum += (num1[i] - '0');
                i--;
            }     
            if(j >= 0)
            {
                sum += (num2[j] - '0');
                j--;
            }
            sum += carry; 
            carry = sum / 10;
            res += to_string(sum % 10);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};