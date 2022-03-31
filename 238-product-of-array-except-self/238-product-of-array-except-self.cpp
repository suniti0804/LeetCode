class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> res;
        int n=nums.size();
        
        vector<int> left(n), right(n);
        
        left[0]=1;
        for(int i=1; i<n; i++)
            left[i]=nums[i-1]*left[i-1];
        
        right[n-1]=1;
        for(int i=n-2; i>=0; i--)
            right[i]=nums[i+1]*right[i+1];
        
        for(int i=0; i<n; i++)
            res.push_back(left[i]*right[i]);
        
        return res;
        
    }
};