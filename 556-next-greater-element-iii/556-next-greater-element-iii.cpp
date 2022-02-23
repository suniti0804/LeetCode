class Solution {
public:
    int nextGreaterElement(int num) 
    {
        string arr=to_string(num);
        int n=arr.size();
        int i;
        for(i=n-1; i>0; i--)
         {
             if(arr[i]>arr[i-1])
                break;
         }
         
        if(i==0)
         {
             reverse(arr.begin(), arr.end());
             return -1;
         }
        
        int x=arr[i- 1], smallest=i;
        for(int j = i + 1; j < n; j++)
         {
             if(arr[j]>x&&arr[j]<arr[smallest])
               smallest=j;
         }
         
        swap(arr[smallest], arr[i-1]);
        sort(arr.begin()+i, arr.end());
        
        long long res=stol(arr);  //string to long
        if(res<=INT_MAX)
            return res;
        return -1;
        //return arr;
         
    }
};