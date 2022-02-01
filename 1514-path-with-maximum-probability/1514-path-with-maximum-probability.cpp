class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prob, int start, int end) 
    {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0; i<edges.size(); i++)
        {   
            adj[edges[i][0]].push_back({edges[i][1],prob[i]});
            adj[edges[i][1]].push_back({edges[i][0],prob[i]});
        }
        
        vector<double> res(n, (double)0.0);
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        res[start]=1.0;
        
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