class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int j=0;
        for(int i=1; i<n; i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                swap(nums[i], nums[j]);
            }
        }
        return j+1;
        
    }
};