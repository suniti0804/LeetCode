class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) 
    {
        vector<pair<int, int>> team;
        long long sum=0, res=0;
        for(int i=0; i<n; i++)
            team.push_back({efficiency[i], speed[i]});
        
        sort(team.rbegin(), team.rend());
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=0; i<n; i++)
        {
            pq.push(team[i].second);
            sum+=team[i].second;
            
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            
            res=max(res, sum*team[i].first);
        }
        
        return res%(1000000007);
        
    }
};