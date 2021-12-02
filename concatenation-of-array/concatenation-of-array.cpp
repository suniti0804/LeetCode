class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> res(2*n);
        for(int i=0; i<n; i++)
        {
            res[i]=nums[i];
            res[i+n]=nums[i];
        }
        return res;
    }
};