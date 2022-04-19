class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) 
    {
        int res=0;
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0; i<m; i++)
            for(int j=1; j<n; j++)
                matrix[i][j]+=matrix[i][j-1];
        
     
        for(int j=0; j<n; j++)
        {
            for(int i=j; i<n; i++)
            {
                int curr_sum=0;
                unordered_map<int, int> mp;
                mp[0]=1;
                
                for(int row=0; row<m; row++)
                {
                    if(j)
                        curr_sum+=matrix[row][i]-matrix[row][j-1];
                    else
                        curr_sum+=matrix[row][i];
                    res+=mp[curr_sum-target];
                    mp[curr_sum]++;
                }
                
            }
        }
        
        return res;
        
        
        
    }
};