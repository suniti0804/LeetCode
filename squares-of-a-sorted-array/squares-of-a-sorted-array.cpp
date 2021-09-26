class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> res(n);
        
        int s = 0;
        int e = n-1;
        int k=n-1;
        
        while(s<=e)
        {
            if(abs(arr[s]) < abs(arr[e]))
            {
                res[k--] = arr[e]*arr[e];
                e--;
            }
            else
            {
                res[k--] = arr[s]*arr[s];
                s++;
            }
        }
        
        return res;
    }
};