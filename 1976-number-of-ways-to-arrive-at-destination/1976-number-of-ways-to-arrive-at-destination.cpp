typedef long long ll;
typedef pair<long long, long long> ppl;
class Solution{
    public:
int countPaths(int n, vector<vector<int>>& roads) 
{
    int mod = (1e9+7);
    vector<ll> dist(n,LLONG_MAX);
    vector<int> ways(n,0);
    priority_queue<ppl, vector<ppl>, greater<ppl>> pq;

    dist[0] = 0; ways[0]=1; pq.push({0,0});

    vector<ppl> adj[n];

    //making adjacency list
    for(auto x : roads){
        adj[x[0]].push_back({x[1],x[2]});
        adj[x[1]].push_back({x[0],x[2]});
    }

    while(!pq.empty()){
        ll distance = pq.top().first;
        ll node = pq.top().second;
        pq.pop();
        for(auto x : adj[node]){
            ll adjNode = x.first;
            ll nextDist = x.second;

            if(distance+nextDist < dist[adjNode]){
                dist[adjNode] = distance+nextDist;
                ways[adjNode] = ways[node];
                pq.push({dist[adjNode],adjNode});
            } else if(distance+nextDist == dist[adjNode]){
                ways[adjNode] = (ways[adjNode]+ways[node])%mod;
            }
        }
    }

    return ways[n-1];
   
}
};