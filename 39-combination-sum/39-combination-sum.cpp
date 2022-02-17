class Solution {
public:
    
    vector<vector<int>> res;
    vector<int> current;
    
    void solve(vector<int>& candidates, int target, int idx)
    {
        if(target == 0)
        {
            res.push_back(current);
            return;
        }
        
        if(idx == candidates.size() || target < 0)
            return;
        current.push_back(candidates[idx]);
        solve(candidates, target - candidates[idx], idx);
        current.pop_back();
        solve(candidates, target, idx + 1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        solve(candidates, target, 0);
        return res;
    }
};