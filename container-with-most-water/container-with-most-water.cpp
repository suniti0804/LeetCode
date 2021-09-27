class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int s=0;
        int e=n-1;
        int res=INT_MIN;
        
        while(s<=e)
        {
            res=max(res,min(height[s],height[e])*(e-s));
            if(height[s]<height[e])
                s++;
            else
                e--;
        }
        
        return res;
    }
};