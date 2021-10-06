class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        for(int i = 0; i < n; i++)   //to make the range 0 to N - 1
          nums[i] = nums[i] - 1;
        
        for(int i = 0; i < n; i++)
        {
            int index = nums[i] % n;
            nums[index] += n;
        }
        
        vector<int> res;
        for(int i = 0; i < n; i++)
            if(nums[i] >= 2 * n)
                res.push_back(i + 1);   //as 1 was added to elements
        
        return res;
    }
};