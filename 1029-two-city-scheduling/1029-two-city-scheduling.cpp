class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        vector<int> diff;
        int mincost = 0;
        
        for(int i = 0; i<costs.size(); ++i)
        {
            mincost += costs[i][0];
            diff.push_back(costs[i][1] - costs[i][0]);
        }
        sort(diff.begin(),diff.end());
        
        for(int i=0; i<costs.size()/2; ++i)
            mincost += diff[i];
        
        return  mincost;
        
    }
};