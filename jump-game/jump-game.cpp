class Solution {
public:
    bool canJump(vector<int>& arr) 
    {
        int n=arr.size();
        if(n==0||n==1)
            return true;
        int jump = 1;
        int max_step = arr[0];
        int step = arr[0];
        
        if(arr[0] == 0)
          return false;
        
        for(int i = 1; i < n; i++)
        {
            if(i == n - 1)
              return true;
            max_step = max(max_step, arr[i] + i);
            step--;
            if(step == 0)
            {
                jump++;
                if(i >= max_step)
                  return false;
                  
                step = max_step - i;
            }
        }
        
        return false;
        
    }
};