class Solution {
public:
    int minimumTime(string s) 
    {
        int n=s.size();
        vector<int> res;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
               res.push_back(-1);
            else
                res.push_back(1);
        }    
        
        
        int mini=0;
        int sum=0;
        
        for(auto i:res)
        {
            sum+=i;
            mini=min(sum, mini);
            if(sum>0)
                sum=0;
           
        }
        
        return n+mini;
    }
};