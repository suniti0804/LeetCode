class Solution {
public:
    
    //passing &nums doesn't changes the vector thus swapping was not
    //happening and thus was getting WA
    
    void solve(vector<int> nums, int s, int e, vector<vector<int>>& res)
    {
        if(s==e)
        {
            res.push_back(nums);   
            return;
        }    
        
        else
        {
            for(int i=s; i<=e; i++)
            {
                if(i!=s&&nums[i]==nums[s])
                    continue;
                swap(nums[i], nums[s]);
                solve(nums, s+1, e, res);
            }
        }
        
        return;
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        solve(nums, 0, nums.size()-1, res);
        return res;
        
    }
};