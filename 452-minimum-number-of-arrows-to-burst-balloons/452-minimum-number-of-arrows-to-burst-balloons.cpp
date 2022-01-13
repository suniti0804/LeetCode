class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(), points.end());
        int ctr=1;
        int hi=points[0][1];
        
        for(auto i:points)
        {
            if(i[0]<=hi)
               hi=min(hi, i[1]);
            else
            {
                hi=i[1];
                ctr++;
            }
        }
        
        return ctr;
        
    }
};