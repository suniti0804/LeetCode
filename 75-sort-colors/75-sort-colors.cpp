class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n=nums.size();
        int start=0, mid=0, end=n-1;
        
        while(mid<=end)
        {
            if(nums[mid]==0)
                swap(nums[mid++], nums[start++]);
            else if(nums[mid]==1)
                mid++;
            else
                swap(nums[mid], nums[end--]);
        }
    }
};