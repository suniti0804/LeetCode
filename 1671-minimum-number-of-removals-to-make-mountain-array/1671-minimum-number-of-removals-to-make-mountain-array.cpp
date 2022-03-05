class Solution {
public:
    int minimumMountainRemovals(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> t1(n, 1), t2(n, 1);
        
        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++)
                if(arr[i]>arr[j])
                    t1[i]=max(t1[i], t1[j]+1);
        
        for(int i=n-1; i>=0; i--)
            for(int j=n-1; j>i; j--)
                if(arr[i]>arr[j])
                    t2[i]=max(t2[i], t2[j]+1);
        
        int res=0;
        
        for(int i=0; i<n; i++)
        {
            if(t1[i]==1||t2[i]==1)
                continue;
            res=max(res, t1[i]+t2[i]-1);
        }
      
        return n-res;
    }
};