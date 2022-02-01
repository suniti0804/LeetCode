typedef pair<int, int> pii;
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) 
    {
        vector<int>dist(n, 1e8);
        dist[src]=0;
        
        // Run only K+1 times since we want shortest distance in K hops
        for( int i=0; i<=k; i++) 
        {
            vector<int> temp(dist);
            for(auto i:flights) 
                temp[i[1]]=min(temp[i[1]], dist[i[0]]+i[2]);
                
            dist=temp;
        }
        
        return dist[dst]==1e8?-1:dist[dst];
    }
};