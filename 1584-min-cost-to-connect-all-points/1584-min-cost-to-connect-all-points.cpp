class Solution {
public:
    
    int find_set(vector<int>& parent, int i)
    {
        if(parent[i]<0)
            return i;
       return parent[i] = find_set(parent, parent[i]);	//optimisation 
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) 
    {
        int n=points.size();
        int res=0;
        vector<int> parent(n, -1);
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int dist=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                pq.push({dist, i, j});
            }
        }
        
        while(!pq.empty())
        {
            auto p=pq.top();
            pq.pop();
            
            int w=p[0];
            int x=p[1];
            int y=p[2];
            
            x=find_set(parent, x);
            y=find_set(parent, y);
            
            if(x!=y)
            {
                res+=w;
                parent[x]+=parent[y];
                parent[y]=x;
                if(parent[x]==-n)
                    break;
            }
        }
        
        return res;
        
    }
};