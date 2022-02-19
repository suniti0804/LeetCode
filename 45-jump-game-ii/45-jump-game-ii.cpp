class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
            return 0;
        if(nums[0]==0)
            return -1;
        int jump=1;
        int max_step=nums[0];
        int step=nums[0];
        
        for(int i=1; i<n; i++)
        {
            if(i==n-1)
                break;
            max_step=max(max_step, i+nums[i]);
            step--;
            
            if(step==0)
            {
                jump++;
                if(i>=max_step)  //if(i>max_step)
                    return -1;
                step=max_step-i;
            }
        }
        
        return jump;
        
    }
};