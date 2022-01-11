class Solution {
public:
    uint32_t reverseBits(uint32_t X) 
    {
        uint32_t res=0;
        vector<uint32_t> v;
        while(X)
        {
            int digit=X%2;
            v.push_back(digit);
            X/=2;
        }
        
        
        int k=31;
        for(int i=0; i<v.size(); i++)
          res+=pow(2,k--)*v[i];
          
        return res;  
    }
};