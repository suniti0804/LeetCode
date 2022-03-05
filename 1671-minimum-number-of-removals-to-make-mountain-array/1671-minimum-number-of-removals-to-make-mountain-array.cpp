class Solution {
public:
    int minimumMountainRemovals(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> t1, t2, t(n);
        int res=INT_MAX;
        
        for(int i=0; i<n; i++)
        {
            auto it=lower_bound(t1.begin(), t1.end(), arr[i]);
            if(it==t1.end())
                t1.push_back(arr[i]);
            else
                *it=arr[i];
            t[i]=t1.size();
        }
        
        for(int i=n-1; i>=0; i--)
        {
            auto it=lower_bound(t2.begin(), t2.end(), arr[i]);
            if(it==t2.end())
                t2.push_back(arr[i]);
            else
                *it=arr[i];
            
            if(t[i]>1&&t2.size()>1)
                res=min(res, n-(t[i]+(int)t2.size()-1));
                
        }
        
        return res;
    }
};