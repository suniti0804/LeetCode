class Solution {
public:
    int trap(vector<int>& height) 
    {
        //Dynamic Programming Approach
        int n = height.size();
        if(n == 0 || n == 1)
            return 0;
        
        int right[n], left[n];
        
        left[0] = height[0];
        
        for(int i = 1; i < n; i++)
            left[i] = max(height[i], left[i - 1]);
        
        right[n - 1] = height[n - 1];
        
        for(int i = n - 2; i >= 0; i--)
            right[i] = max(height[i], right[i + 1]);
        
        int res = 0;
        for(int i = 0; i < n; i++)
            res += min(right[i], left[i]) - height[i];
        
        return res;
    }
};