class Solution {
public:
    
    int maxSumDivThree(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> t(n, vector<int>(3,0));
        
        if(nums[0]%3==0)
            t[0][0]=nums[0];
        
        else if(nums[0]%3==1||nums[0]%3==2)
            t[0][1] = nums[0];
    
        
        for(int i=1;i<n;i++)
        {
            int x=t[i-1][0]+nums[i];
            int y=t[i-1][1]+nums[i];
            int z=t[i-1][2]+nums[i];
            
            t[i]=t[i-1];
           
            t[i][x%3]=max({t[i][x%3], x});
            t[i][y%3]=max({t[i][y%3], y});
            t[i][z%3]=max({t[i][z%3], z});   
        }
        
        return t[n-1][0];
    }
    
    /*
    //space optimised dp
    int maxSumDivThree(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> dp(1,vector<int>(3,0));
        if(nums[0]%3 == 0){
            dp[0][0] = nums[0];
        }else if(nums[0]%3 == 1){
            dp[0][1] = nums[0];
        }else{
            dp[0][1] = nums[0];
        }
        for(int i=1;i<n;i++){
            int x = dp[0][0] + nums[i];
            int y = dp[0][1] + nums[i];
            int z = dp[0][2] + nums[i];
            // cout<<x<<" "<<y<<" "<<z<<endl;
            dp[0][x%3] = max({dp[0][x%3],x});
            dp[0][y%3] = max({dp[0][y%3],y});
            dp[0][z%3] = max({dp[0][z%3],z});
            
        }
        return dp[0][0];
    }  */
};