typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) 
    {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0; i<n-3; i++)
        {
            if(i!=0&&arr[i]==arr[i-1])
              continue;
            for(int j=i+1; j<n-2; j++)
            {
                if(j!=i+1&&arr[j]==arr[j-1])
                  continue;
                  
                int k=j+1;
                int l=n-1;
                
                while(k<l)
                {
                    if(k!=j+1&&arr[k]==arr[k-1])
                    {
                        k++;
                        continue;
                    }
                    if(l!=n-1&&arr[l]==arr[l+1])
                    {
                        l--;
                        continue;
                    }
        
                    ll sum=ll(arr[i])+ll(arr[j])+ll(arr[k])+ll(arr[l]);
                    if(sum==target)
                    {
                        res.push_back({arr[i], arr[j], arr[k], arr[l]});
                        k++;
                        l--;
                    }
                    else if(sum<target)
                      k++;
                    else
                      l--;
                    
                }
            
            }
        }
        return res;
    }
};