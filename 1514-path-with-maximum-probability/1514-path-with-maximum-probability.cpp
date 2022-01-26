class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prob, int start, int end) 
    {
        //create a weighted graph
        vector<vector<pair<int, double>>> adj(n);
        for(int i=0; i<edges.size(); i++) 
        {
            adj[edges[i][0]].push_back({edges[i][1], prob[i]});
            adj[edges[i][1]].push_back({edges[i][0], prob[i]});   
        }
        
        //initialize values
        vector<double> dist(n, (double)0.0);
        priority_queue<pair<double, int>> pq; //use of max heap
        pq.push({1.0, start});
        dist[start]=1.0;
        
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(auto v:adj[u])
            {
                if(dist[u]*v.second>dist[v.first])
                {
                    dist[v.first]=dist[u]*v.second;
                    pq.push({dist[v.first], v.first});
                }
            }
        }
        
        return dist[end];
        
    }
};