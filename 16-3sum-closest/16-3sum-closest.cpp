class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int ans, prev_diff=INT_MAX;
        
        for(int i=0; i<n-2; i++)
        {
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<prev_diff)
                {
                    prev_diff=abs(sum-target);
                    ans=sum;
                }
                
                if(sum<target)
                    j++;
                else
                    k--;
            }
        }
        
        return ans;
        
    }
};