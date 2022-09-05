class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int res=0;
        int n=height.size();
        int lo=0, hi=n-1;
        while(lo<hi)
        {
            res=max(res, (hi-lo)*min(height[lo], height[hi]));
            if(height[lo]<height[hi])
                lo++;
            else
                hi--;
        }
        return res;
        
    }
};