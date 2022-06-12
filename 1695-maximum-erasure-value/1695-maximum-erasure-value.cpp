class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        int s=0;
        int i=0,j=0,ans=0;
        map<int,int> mp;
        while(j<n)
        {
            s+=nums[j];
            mp[nums[j]]++;
            if(mp[nums[j]]>1)
            {
               ans=max(ans, s-nums[j]); 
               while(mp[nums[j]]>1)
               {
                   s-=nums[i];
                   if(mp[nums[i]]>0)
                      mp[nums[i]]--;
                   i++;
               }
            }
            j++;
        }
        return max(ans, s);
    }
};