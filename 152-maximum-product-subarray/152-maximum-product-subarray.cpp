class Solution {
public:
    int maxProduct(vector<int>& arr) 
    {
       /*int n=arr.size();
        int res=arr[0];

        for (int i=0; i<n; i++)
        {
            int prod=arr[i];
            for (int j = i+1; j<n; j++)
            {
                res = max(res, prod);
                prod *= arr[j];
            }
            res = max(res, prod);
        }
        return res;  */
        
        int res=arr[0];
        int minVal=arr[0];
        int maxVal=arr[0];
        
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]<0)
                swap(minVal, maxVal);
            minVal=min(arr[i], minVal*arr[i]);
            maxVal=max(arr[i], maxVal*arr[i]);
            
            res=max(res, maxVal);
        }
        
        return res;
        
        
    }
};