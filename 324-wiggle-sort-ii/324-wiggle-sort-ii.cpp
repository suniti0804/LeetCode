class Solution {
public:
    //one mehthod is sort the array and arrange alternately
    //in ascending and descending order
    void wiggleSort(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> temp(nums);
        sort(temp.begin(), temp.end());
        
        int k=0, i=(n%2)==0?(n/2)-1:(n/2), j=n-1;
        
        while(i>=0||j>i&&k<n)
        {
            if(k&1)
                nums[k++]=temp[j--];
            else
                nums[k++]=temp[i--];
        }
        
    }
};