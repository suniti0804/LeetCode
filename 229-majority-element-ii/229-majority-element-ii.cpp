class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> res;
        int n=nums.size();
        int ctr1=0, ctr2=0;
        int first=0, second=0;
        
        for(auto i:nums)
        {
            if(i==first)
                ctr1++;
            else if(i==second)
                ctr2++;
            else if(ctr1==0)
            {
                first=i;
                ctr1=1;
            }
            else if(ctr2==0)
            {
                second=i;
                ctr2=1;
            }
            else
            {
                ctr1--;
                ctr2--;
            }
        }
        ctr1=ctr2=0;
        for(auto i:nums)
        {
            if(i==first)
                ctr1++;
            else if(i==second)
                ctr2++;
        }
        
        if(ctr1>(n/3))
            res.push_back(first);
        if(ctr2>(n/3))
            res.push_back(second);
        return res;
        
    }
};