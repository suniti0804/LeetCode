class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        /*int n = nums.size();
        int count_zero = 0, count_one = 0, count_two = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
                count_zero++;
            else if(nums[i] == 1)
                count_one++;
            else
                count_two++;
        }
        
        int i = 0;
        while(count_zero--)
            nums[i++] = 0;
        
        while(count_one--)
            nums[i++] = 1;
        
        while(count_two--)
            nums[i++] = 2;   */
        
        int n = nums.size();
        int lo = 0;
        int mid = 0;
        int hi = n - 1;
        
        while(mid <= hi)
        {
            if(nums[mid] == 0)
                swap(nums[lo++], nums[mid++]);
            else if(nums[mid] == 1)
                mid++;
            else
                swap(nums[mid], nums[hi--]);
        }
    }
};