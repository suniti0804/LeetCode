class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int n=nums.size();
        int min_idx=min_element(nums.begin(), nums.end())-nums.begin();
        int max_idx=max_element(nums.begin(), nums.end())-nums.begin();
        
        if(min_idx>max_idx)
            swap(min_idx, max_idx);
        
        return min(min(max_idx+1, n-min_idx), min_idx+1+n-max_idx);
    }
};