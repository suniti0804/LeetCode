class Solution {
public:
    int minDeletion(vector<int>& nums) 
    {
        int n=nums.size();
        int ctr=0;
        if(n==0)
            return 0;
        
        int i=0;
        while(i<n)
        {
            while(i<n-1&&nums[i]==nums[i+1])
            {
                i++;
                ctr++;
            }
            i+=2;
        }
        
        if((n-ctr)&1)
            return ctr+1;
        else
            return ctr;
        
    }
};