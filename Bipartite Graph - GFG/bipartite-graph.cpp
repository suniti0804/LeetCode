// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
   //coloring graph with 0 and 1.
   //colored array is used as visited array
   bool bfs(int u, vector<int> &color, vector<int> adj[]) 
   {
        queue<int> q;
        q.push(u);
        color[u]=1;
        
        while(!q.empty()) 
        {
            int i = q.front(); 
            q.pop();
            for(auto x:adj[i]) 
            {
                if(color[x]==-1) //not colored yet
                {
                    color[x]=!color[i];
                    q.push(x);
                }
                else if(color[x]==color[i])
                    return false;
            }
        }
        return true;
   }

	bool isBipartite(int V, vector<int> adj[])
	{
	    vector<int> color(V, -1);

        for(int i=0; i<V; i++)   //doing bfs for multiple components
        {
           if(color[i]==-1)    //not has been visited
              if(!bfs(i, color, adj))
                return false;
        }
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