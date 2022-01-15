class Solution {
public:
    
    vector<vector<int>> res;
    void permuteRec(vector<int> nums, int pos) {
        int n = nums.size();
        if (pos == n) {
            res.push_back(nums);
            return;
        }
        for (int i = pos; i < n; ++i) {
            if (i != pos && nums[i] == nums[pos]) continue;
            swap(nums[pos], nums[i]);
            permuteRec(nums, pos + 1);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        permuteRec(nums, 0);
        return res;
    }
    
    
};