class Solution {
public:
    long long countPairs(vector<int>& nums, int k) 
    {
        long long ans = 0;
        unordered_map<int, int> mp;
        
        for(auto ele:nums)
        {
            long long gcd = __gcd(k,ele);
            long long x=k/gcd;
            
            for(auto it:mp)
                if(it.first%x==0) 
                    ans+=it.second;
            
             mp[gcd]++;
        }
        
        return ans;
    }
};