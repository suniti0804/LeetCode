class Solution {
public:
    
    bool static comp(string a, string b)
    {
       if(a.size()==b.size())
           return a<b;
        return a.size()<b.size();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) 
    {
        sort(nums.begin(), nums.end(), comp);
        return nums[nums.size()-k];
    }
};