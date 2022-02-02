typedef long long ll;
typedef pair<long long, long long> pii;
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) 
    {
        vector<vector<pii>> adj(n);
        
        for(auto i:roads)
        {
            adj[i[0]].push_back({i[1], i[2]});
            adj[i[1]].push_back({i[0], i[2]});
        }
        
        vector<ll> dist(n, 1e18);
        vector<ll> ways(n, 0);
        dist[0]=0;
        ways[0]=1;
        
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        pq.push({0, 0});
        
        while(!pq.empty())
        {
            ll curr_dist=pq.top().first;
            ll u=pq.top().second;
            pq.pop();
            
            for(auto v:adj[u])
            {
                if(dist[v.first]>v.second+dist[u])
                {
                    dist[v.first]=v.second+dist[u];
                    pq.push({dist[v.first], v.first});
                    ways[v.first]=ways[u];
                }
                
                else if(curr_dist+v.second==dist[v.first])
                    ways[v.first]=(ways[v.first]+ways[u])%1000000007;
            }
        }
         
        return ways[n-1];
    }
};