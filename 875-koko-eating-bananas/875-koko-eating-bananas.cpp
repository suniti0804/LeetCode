class Solution {
public:
    bool isValid(int mid, vector<int>& piles, int h)
    {
        int time = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++)
        {
            time += (piles[i] + mid - 1) / mid;
        }
        
        if(time <= h)
            return true;
        return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
       // sort(piles.begin(), piles.end());
        int res;
        int n = piles.size();
      
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
     
        while(lo < hi)
        {
            int mid = lo + (hi - lo)/2;
            if(isValid(mid, piles, h))
                hi = mid;
            else
                lo = mid + 1;
        }
        
        return lo;
    }
};