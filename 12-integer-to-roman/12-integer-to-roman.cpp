class Solution {
public:
    string intToRoman(int num) 
    {
        string res="";
        int val[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        
        while(num)
        {
            int div=num/val[i];
            while(div--)
                res+=sym[i];
            
            num%=val[i];
            i--;
        }
        
        return res;
    }
};