class Solution {
public:
    
    void merge(vector<pair<int, int>>& v, vector<int>& res, int l, int m, int r)
    {
        vector<pair<int, int>> temp(r-l+1);
        long long int i = l;
        long long int j = m + 1;
        long long int k = 0;
        
        //sorting is done in descending order
        while(i<=m && j<=r)
         {
             if(v[i].first<=v[j].first)
               temp[k++] = v[j++];
             else
                {
                    res[v[i].second]+=r-j+1;
                    temp[k++]=v[i++];
                }        
         }
         
        while(i <= m)
          temp[k++] = v[i++];
          
        while(j <= r)
          temp[k++] = v[j++];
          
        for(int i = l; i <= r; i++)
          v[i] = temp[i-l];
    }
    
    void mergeSort(vector<pair<int, int>>& v, vector<int>& res, int l, int r)
    {
        if(r<=l)
            return;

        int m = l + (r - l)/2;
        mergeSort(v, res, l, m);
        mergeSort(v, res, m + 1, r);
        merge(v, res, l, m , r);           
        
    }
    
    vector<int> countSmaller(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> res(n, 0);
        
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++)
            v.push_back({nums[i], i});
        mergeSort(v, res, 0, n-1);
        return res;
    }
};