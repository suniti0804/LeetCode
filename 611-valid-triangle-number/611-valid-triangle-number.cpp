class Solution {
public:
    int triangleNumber(vector<int>& arr) 
    {
        int res = 0;
        int n=arr.size();
        sort(arr.begin(), arr.end());
        for(int i = n - 1; i >= 0; i--)
          {
              int j = 0;
              int k = i - 1;
              while(j < k)
                {
                    if(arr[j] + arr[k] > arr[i])
                      {
                          res += k - j;
                          k--;
                      }
                    else 
                      j++;
                  
                }
          }
        
        return res;
        
    }
};