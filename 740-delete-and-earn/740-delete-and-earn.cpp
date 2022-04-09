class Solution {
public:
    //very similar to maximum sum of non adjacent elements
    int deleteAndEarn(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int, int> mp;
        for(auto num:nums)
            mp[num]+=num;  //to have the count of maximum point this num can give
        
        int N=*max_element(nums.begin(), nums.end());
        
        vector<int> t(N+1, 0);
        t[1]=mp[1];
        
        for(int i=2; i<=N; i++)
            t[i]=max(mp[i]+t[i-2], t[i-1]);
        
        return t[N];
        
    }
};