class Solution {
public:
    
    long long trips(long long int t, vector<int>& time)
    {
        long long int num=0;
        for(auto it:time)
            num+=t/it;
        return num;
    }
    
    long long minimumTime(vector<int>& time, int t) 
    {
        long long int lo=0, hi=(long long int)*max_element(time.begin(), time.end())*t;
        long long ans=0;
       
        while(lo<=hi)
        {
            long long int mid=lo+(hi-lo)/2;
            if(trips(mid, time)<t)
                lo=mid+1;
            else
            {
                ans=mid;
                hi=mid-1;
            }
        }
        
        return ans;
    }
};