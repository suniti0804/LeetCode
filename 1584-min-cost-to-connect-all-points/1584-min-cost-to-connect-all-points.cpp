typedef pair<int, pair<int, int>> ppi;

class Solution {
public:
    
    //Kruskal's
   /* int find_set(vector<int>& parent, int i)
    {
        if(parent[i]==-1) 
            return i;
       return parent[i]=find_set(parent, parent[i]);	//optimisation 
    }
    
    void union_sets(int a, int b, vector<int>& sz, vector<int>& parent)
    {
        a=find_set(parent, a);
        b=find_set(parent, b);

        if(a!=b)
          {
              if(sz[a]<sz[b])
                swap(a, b);
              parent[b]=a;
              sz[a]+=sz[b];	
          }
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) 
    {
        int n=points.size();
        int res=0;
        vector<int> parent(n, -1);
        vector<int> sz(n, 1);
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
            
            int u=find_set(parent, x);
            int v=find_set(parent, y);
            
            if(u!=v)
            {
                res+=w;
                union_sets(x, y, sz, parent);
            }
        }
        
        return res;
        
    }  */
    
    //Prim's

    //typedef pair<int, pair<int, int>> ppi;
    int minCostConnectPoints(vector<vector<int>>& points) 
    {
        int n=points.size();
		set<pair<int, int>> vis;  //visited and non-visited sets are used to consider the points int the MST and remaining
        //for(int i=0;i<n;i++) 
            //unvis.insert({points[i][0],points[i][1]});  //All points in un-visited

		//Priority queue is having distance as key(from growing MST) and pair<int,int> for coordinates in graph
         priority_queue<ppi, vector<ppi>, greater<ppi>> pq;

        int ans=0; 
        pq.push({0, {points[0][0], points[0][1]}});  
        
        while(!pq.empty())
        {
            auto curr=pq.top(); 
            pq.pop();  //minimum distance coordinate/vertex from growing ST.
            if(vis.find({curr.second.first, curr.second.second})!=vis.end()) 
                continue; 
            vis.insert({curr.second.first, curr.second.second}); 
        
			for(int j=0; j<n; j++)   // now consider only those vertices which have not been visited before
            {
                if(vis.find({points[j][0], points[j][1]})==vis.end())
                {
                    int x=points[j][0];
                    int y=points[j][1];
                    int dist=abs(curr.second.first-x)+abs(curr.second.second-y);
                    pq.push({dist, {x, y}});
                }    
            }
			
            ans+=curr.first;
        }
        return ans;
    }  
    
    /*
    int minCostConnectPoints(vector<vector<int>>& ps) 
    {
        int n=ps.size(), res=0, i=0;
        vector<bool> vis(n);
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        
        for(int edges=0; edges<n-1; edges++)
        {
            vis[i]=true;
            for (int j=0; j<n; ++j)
                if (!vis[j])
                    pq.push({(abs(ps[i][0]-ps[j][0])+abs(ps[i][1]-ps[j][1])), j});
            
            while (vis[pq.top()[1]])
                pq.pop();
            
            res+=pq.top()[0];
            i=pq.top()[1];
            pq.pop();
        }
        
        return res;
    } */
    
};