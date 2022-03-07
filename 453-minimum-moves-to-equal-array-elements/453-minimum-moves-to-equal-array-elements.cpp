class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        //total number of moves=element-least
        int sum=0, res=0;
        
        for(auto n:nums) sum+=n;
        int ele=*min_element(nums.begin(), nums.end());
        
        for(auto n:nums)
            res+=n-ele;
        
        return res;
        
    }
};