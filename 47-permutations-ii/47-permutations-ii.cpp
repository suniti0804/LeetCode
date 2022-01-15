class Solution {
public:
    
    vector<vector<int>> res;
    
    void solve(vector<int> nums, int s, int e)
    {
        if(s==e)
        {
            res.push_back(nums);   
            return;
        }    
        
        
        for(int i=s; i<=e; i++)
        {
            if(i!=s&&nums[i]==nums[s])
                continue;
            swap(nums[i], nums[s]);
            solve(nums, s+1, e);
        }
    
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        solve(nums, 0, nums.size()-1);
        return res;
        
    }
};