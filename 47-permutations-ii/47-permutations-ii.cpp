class Solution {
public:
    
    void solve(vector<int>& nums, int s, int e, vector<vector<int>>& res)
    {
        if(s == e)
          res.push_back(nums);
        
        else
        {
            for(int i = s; i <= e; i++)
            {
                swap(nums[s], nums[i]); //swapping
                solve(nums, s + 1, e, res); //recursion
                swap(nums[s], nums[i]); //backtrack
            }
        }
        
        return;
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> res;
        solve(nums, 0, nums.size()-1, res);
        sort(res.begin(), res.end());
        
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
        
    }
};