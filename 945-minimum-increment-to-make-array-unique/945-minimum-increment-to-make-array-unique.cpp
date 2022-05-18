class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        int ctr=0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]<=nums[i-1])
            {
                ctr+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;  
            }
        }
        
        return ctr;
        
        /*
                
        int n=nums.size();
        int ctr=0;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        
        for(int i=0; i<n; i++)
        {
            if(mp[nums[i]]>1)
            {
                int k=nums[i];
                while(mp[k]!=0)
                    k++;
                ctr+=k-nums[i];
                mp[nums[i]]--;
                mp[k]++;
            }
        }
        return ctr;
        */
    }
};