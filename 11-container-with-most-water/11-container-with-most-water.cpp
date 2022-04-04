class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int res=0;
        int i=0, j=height.size()-1;
        
        while(i<j)
        {
            res=max(res, (j-i)*min(height[i], height[j]));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        
        return res;
        
    }
};