class Solution {
public:

    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto n:nums) sum+=n;
        
        sort(nums.begin(), nums.end());
        
        int res=0;
        for(auto i:nums)
            res+=abs(i-nums[n/2]);
        return res;
    }
};