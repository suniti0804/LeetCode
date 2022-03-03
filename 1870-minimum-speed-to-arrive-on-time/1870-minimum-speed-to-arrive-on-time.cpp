class Solution {
public:
    
    bool isValid(int mid, vector<int>& dist, double hour)
    {
        double hr=0;
        for(int i=0; i<dist.size()-1; i++)
            hr+=ceil((double)dist[i]/mid);
        hr+=((double)dist.back())/mid;
        return hr<=hour;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) 
    {
        if(dist.size()>ceil(hour))
            return -1;
        int res=0;
        int lo=1, hi=1e7;
        
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(isValid(mid, dist, hour))
            {
                res=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        return res;
        
    }
};