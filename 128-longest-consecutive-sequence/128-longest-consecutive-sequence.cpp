class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int res=1;
        unordered_map<int, int> mp;
        
        for(auto i:nums) mp[i]++;
        
        for(auto it:mp)
        {
            int k=it.first;
            if(mp.find(k-1)==mp.end())
            {
                int ctr=0;
                while(mp.find(k++)!=mp.end())
                    ctr++;
                
                res=max(res, ctr);
            }
        }
        return res;
    }
};