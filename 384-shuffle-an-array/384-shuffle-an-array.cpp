class Solution {
    
    vector<int> v;
    
public:
    Solution(vector<int>& nums) 
    {
        v=nums;
    }
    
    vector<int> reset() 
    {
        return v;
    }
    
    vector<int> shuffle() 
    {
        vector<int> res(v);
        int n=res.size();
        for(int i=0; i<n; i++)
        {
            int idx=rand()%(n-i);
            swap(res[i+idx], res[i]);
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */