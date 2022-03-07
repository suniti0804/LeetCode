class Solution {
public:
    long long minimumRemoval(vector<int>& beans) 
    {
        long long n=beans.size();
        long long res=LONG_MAX;
        
        long long sum=0;
        for(auto num:beans)
            sum+=num;
        
        sort(beans.begin(), beans.end());
        long long num=0;
        
        for(long long i=0; i<n; i++)
        {
            long long curr=sum-(n-i)*(long long)beans[i]*1LL;
            res=min(res, curr);
        }
   
        return res;
    }
};