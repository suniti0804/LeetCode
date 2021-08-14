class Solution {
public:
    
    int count;
    void merge(vector<int>& nums, int s, int mid, int e)
    {
        int i = s, j = mid + 1;
        while(i <= mid && j <= e)
        {
            if((long)nums[i] >(long)2*nums[j])
            {
                count += mid - i + 1;
                j++;
            }
            else
                i++;
        }
        
        sort(nums.begin() + s, nums.begin() + e + 1);
        return;
    }
    
    void mergeSort(vector<int>& nums, int s, int e)
    {
        if(s >= e)
            return;
       
        int mid = s + (e - s)/2;
        mergeSort(nums, s, mid);
        mergeSort(nums, mid + 1, e);
        merge(nums, s, mid, e);
        
    }
    
    int reversePairs(vector<int>& nums) 
    {
        int n = nums.size();
        count = 0;
        mergeSort(nums, 0, n - 1);
        return count;
    }
};