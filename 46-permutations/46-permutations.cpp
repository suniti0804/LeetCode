class Solution {
public:
    
    void solve(vector<int>& nums, int s, int e, vector<vector<int>>& res)
    {
        if(s==e) //if traversal has reached end
        {
            res.push_back(nums);
            return;
        }
        
        for(int i=s; i<=e; i++)
        {
            swap(nums[s], nums[i]);
            solve(nums, s+1, e, res);
            swap(nums[s], nums[i]);
        }
        
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> res;
        solve(nums, 0, nums.size()-1, res);
        return res;
        
    }
};