class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) 
    {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        
        for(int i=0; i<n-2; i++)
        {
            if(i>0&&arr[i]==arr[i-1])
                continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(j>i+1&&arr[j]==arr[j-1])
                {
                    j++;
                    continue;
                }
                if(k<n-1&&arr[k]==arr[k+1])
                {
                    k--;
                    continue;
                }
                
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==0)
                {
                    res.push_back({arr[i], arr[j], arr[k]});
                    j++;
                    k--;
                }    
                else if(sum<0)
                    j++;
                else
                    k--;
            }
        }
        return res;
        
    }
};