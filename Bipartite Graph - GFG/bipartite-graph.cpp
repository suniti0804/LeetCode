// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool bfs(int u, vector<int> adj[], vector<int>& color)
    {
        color[u]=1;
        queue<int> q;
        q.push(u);
        
        while(!q.empty())
        {
            int i=q.front();
            q.pop();
            
            for(auto v:adj[i])
            {
                if(color[v]==color[i])
                  return false;
                else if(color[v]==-1)
                {
                    color[v]=!color[i];
                    q.push(v);
                }
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[])
	{
	    vector<int> color(V, -1);
	    
	    for(int i=0; i<V; i++)
	      if(color[i]==-1)
	        if(!bfs(i, adj, color))
	          return false;
	          
	   return true;       
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends