class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> t(n, vector<int>(n));
        
        for (int i=0; i<n; i++) 
            t[i][i]=nums[i];
        
        for (int i=1; i<n; i++)
            for (int j=0; j+i<n; j++) 
                t[j][j+i] = max(nums[j+i]-t[j][j+i-1], nums[j]-t[j+1][j+i]);
            
        
        return t[0][n-1]>=0; 
        
    }
};