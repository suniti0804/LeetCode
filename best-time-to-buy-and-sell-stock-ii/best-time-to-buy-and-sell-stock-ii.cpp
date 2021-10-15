class Solution {
public:
    int maxProfit(vector<int>& A) 
    {
        int ans = 0;
        int n = A.size();
       
        if(n == 1)
          return 0;
        
        int i = 0;
        while(i < n - 1)
         {
             while((i < n - 1) && (A[i + 1] <= A[i]))
               i++;
             if(i == n - 1)
               break;
             int buy = i;
             i++;
             while((i < n) && (A[i] >= A[i - 1]))
               i++;
             
             int sell = i - 1;
             ans += A[sell] - A[buy];
         }
         
         return ans; /*
        
        int ans = 0;
        
        for(int i = 1; i < A.size(); i++)
        {
            if(A[i] > A[i - 1])
                ans += A[i] - A[i - 1];
        }
        
        return ans;  */
    }
};