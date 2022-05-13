class Solution {
public:
    
    int dist(int x1, int y1, int x2, int y2)
    {
        return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    }
    
    int numberOfBoomerangs(vector<vector<int>>& points) 
    {
        int n=points.size();
        int ctr=0;
        
        for(int i=0; i<n; i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            
            unordered_map<int, int> mp;
            
            for(int j=0; j<n; j++)
            {
                int val=dist(x, y, points[j][0], points[j][1]);
                 mp[val]++;   
            }
            
            for(auto it:mp)
            {
                if(it.second>1)
                    ctr+=(it.second*(it.second-1));
            }
        }
        
        return ctr; 
        
    }
};