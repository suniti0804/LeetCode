class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        int N=arr.size();
        if(N==1)
            return arr[0];
        sort(arr.begin(), arr.end());
        int res=1e9, ans=-1;
        int ctr=1;

        for(int i=1; i<N; i++)
        {
            if(arr[i]==arr[i-1])
                ctr++;
            else
                ctr=1;
            if(ctr>(N/2))
                ans=arr[i];
        }

        return ans;
    }
};