class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> t(n, 1), cnt(n, 1);
        int res=0, max_len=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[i]>nums[j])
                {
                    if(t[i]==t[j]+1)
                        cnt[i]+=cnt[j];
                    if(t[i]<t[j]+1)
                    {
                        t[i]=t[j]+1;
                        cnt[i]=cnt[j];
                    }
                }
                   
            }
            
            if(max_len==t[i])
                res+=cnt[i];
            if(max_len<t[i])
            {
                max_len=t[i];
                res=cnt[i];
            }
        }
        
        return res;
        
      
    }
};