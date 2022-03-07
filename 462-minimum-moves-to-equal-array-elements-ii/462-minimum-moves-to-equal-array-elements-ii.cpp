class Solution {
public:
    
    int solve(vector<int>& nums, int k)
    {
        int res=0;
        for(auto i:nums)
            res+=abs(i-nums[k]);
        return res;
    }
    
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto n:nums) sum+=n;
        
        sort(nums.begin(), nums.end());
        
        //if(n%2!=0)
            return solve(nums, n/2);
        //else
           // return min(solve(nums, n/2), solve(nums, (n-1)/2));
    }
};