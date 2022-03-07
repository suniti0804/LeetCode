class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) 
    {
        vector<int> arr;
        for(auto vec:grid)
            arr.insert(arr.end(), vec.begin(), vec.end());
        sort(arr.begin(), arr.end());
        
        int med=arr[arr.size()/2], res=0;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(abs(med-arr[i])%x!=0)
                return -1;
            res+=abs(med-arr[i])/x;
        }
        return res;
    }
};