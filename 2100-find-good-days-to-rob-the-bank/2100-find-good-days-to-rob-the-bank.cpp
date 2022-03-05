class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& arr, int time) 
    {
        vector<int> res;
        int n=arr.size();
        
        vector<int> pre(n, 0), suff(n, 0);
        pre[0]=0;
        suff[n-1]=0;
        
        for(int i=1; i<n; i++)
            if(arr[i]<=arr[i-1])
                pre[i]=pre[i-1]+1;
        
        for(int i=n-2; i>=0; i--)
            if(arr[i]<=arr[i+1])
                suff[i]=suff[i+1]+1;
        
        for(int i=0; i<n; i++)
            if(pre[i]>=time&&suff[i]>=time)
                res.push_back(i);
        
        return res;
    }
};