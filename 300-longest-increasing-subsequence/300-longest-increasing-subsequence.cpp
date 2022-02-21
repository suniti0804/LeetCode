class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        int lis[n];
        for(int i = 0; i < n; i++)
          lis[i] = 1;
    
        //computation in bottom up manner
        for(int i = 1; i < n; i++)
         {
             for(int j = 0; j < i; j++)
              {
                 //store the maximum length till that element
                  if(a[i] > a[j] && lis[i] < lis[j] + 1)
                   lis[i] = lis[j] + 1;
              }
         }
         
        return *max_element(lis, lis + n);
    }
};