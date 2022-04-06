class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        int sum=1;
        for(int i=n-1; i>=0; i--)
        {
            sum+=digits[i];
            if(sum<10)
            {
                digits[i]=sum;
                sum=0;
                break;
            }
            else
            {
                digits[i]=sum%10;
                sum/=10;
            }    
        }
        
        if(sum)
            digits.insert(digits.begin(), sum);
        return digits;
        
    }
};