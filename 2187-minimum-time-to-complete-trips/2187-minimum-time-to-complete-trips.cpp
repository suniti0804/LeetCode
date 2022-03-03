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
        long long int lo=0, hi=LLONG_MAX/time.size();
       
        while(lo<hi)
        {
            long long int mid=lo+(hi-lo)/2;
            if(trips(mid, time)<t)
                lo=mid+1;
            else
                hi=mid;
        }
        
        return lo;
    }
};