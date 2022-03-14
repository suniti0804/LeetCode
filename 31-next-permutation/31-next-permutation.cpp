class Solution {
public:
    void nextPermutation(vector<int>& arr) 
    {
        int n=arr.size();
        int i=n-2;
        for(; i>=0; i--)
            if(arr[i]<arr[i+1])
                break;
        
        if(i==-1)
        {
            reverse(arr.begin(), arr.end());
            return;
        }
        
        int j=n-1;
        for(; j>i; j--)
            if(arr[j]>arr[i])
                break;
        swap(arr[j], arr[i]);
        reverse(arr.begin()+i+1, arr.end());
        return;
        
    }
};