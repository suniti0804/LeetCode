class Solution {
public:
    //similar to house robber problem
    int deleteAndEarn(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
            mp[nums[i]] += nums[i];
        
        int N = *max_element(nums.begin(), nums.end());
        int t[N + 1];
        memset(t, 0, sizeof(t));
        t[1] = mp[1];
        
        for(int i = 2; i <= N; i++)
            t[i] = max(mp[i] + t[i - 2], t[i - 1]);
            //dp[i]=max(dp[i-2]+hash[i]*i,dp[i-1]);
            //this if : mp[nums[i]]++
        
        return t[N];
    }
};