class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> res(n);
        vector<int> right(n), left(n);

        left[0]=1;
        for(int i=1; i<n; i++)
            left[i]=arr[i-1]*left[i-1];

        right[n-1]=1;
        for(int i=n-2; i>=0; i--)
            right[i]=arr[i+1]*right[i+1];

        for(int i=0; i<n; i++)
            res[i]=left[i]*right[i];

        return res;
    }
};