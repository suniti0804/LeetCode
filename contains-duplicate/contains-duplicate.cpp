class Solution {
public:
    
    /*return set<int>(nums.begin(), nums.end()).size() < nums.size();*/
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i + 1])
                return true;
        
        return false;
    }
};