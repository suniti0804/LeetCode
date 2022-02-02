typedef pair<double, int> pii;
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prob, int start, int end) 
    {
        vector<double> res(n, 0.0);
        res[start]=1.0;
        vector<vector<pair<int, double>>> adj(n);
        
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],prob[i]});
            adj[edges[i][1]].push_back({edges[i][0],prob[i]});
        }
        
        priority_queue<pii> pq;
        pq.push({1.0, start});
        
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(auto v:adj[u])
            {
                if(res[u]*v.second>res[v.first])
                {
                    res[v.first]=res[u]*v.second;
                    pq.push({res[v.first],v.first});
                }
            }
        }
        
        return res[end];
    }
};