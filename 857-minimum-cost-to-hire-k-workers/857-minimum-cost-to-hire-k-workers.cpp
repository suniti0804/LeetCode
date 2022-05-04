class Solution {
public:
    double mincostToHireWorkers(vector<int>& q, vector<int>& w, int k) 
    {
        int n=q.size();
        double res=DBL_MAX;
        long long sum=0;
        vector<pair<double, double>> workers;
        for(int i=0; i<n; i++)
            workers.push_back({(double)w[i]/q[i], (double)q[i]});
        
        sort(workers.begin(), workers.end());
        priority_queue<int> pq;
        
        for(int i=0; i<n; i++)
        {
            sum+=workers[i].second;
            pq.push(workers[i].second);
            
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            
            if(pq.size()==k)
                res=min(res, sum*workers[i].first);
        }
        
        return res;
        
    }
};