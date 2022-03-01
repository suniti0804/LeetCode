class Solution {
public:
    void nextPermutation(vector<int>& arr) {
          
        int N=arr.size();
        int i;
        for(i = N - 1; i > 0; i--)
         {
             if(arr[i]>arr[i - 1])
                break;
         }
         
        if(i==0)
         {
             reverse(arr.begin(), arr.end());
             return;
         }
        
        int smallest = i;
        //smallest digit greater than x
        for(int j = i + 1; j < N; j++)
         {
             if(arr[j]>arr[i-1]&&arr[j]<arr[smallest])
               smallest=j;
         }
         
        swap(arr[smallest], arr[i-1]);
        sort(arr.begin()+i, arr.end());
        
        return;
        //return arr;
         
    }
};