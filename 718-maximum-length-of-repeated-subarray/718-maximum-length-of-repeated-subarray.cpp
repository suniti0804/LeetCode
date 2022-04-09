class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=nums1.size();
        int n=nums2.size();
        
        int res=INT_MIN;
        
        vector<vector<int>> t(m+1, vector<int> (n+1));
        
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0||j==0)
                    t[i][j]=0;
                else if(nums1[i-1]==nums2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=0;
                
                res=max(res, t[i][j]);
            }
        }
        
      return res;
        
    }
};