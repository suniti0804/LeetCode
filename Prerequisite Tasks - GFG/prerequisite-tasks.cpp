// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

   bool isCyclic(vector<int> graph[], int v, vector<int>& vis)
   {
        if(vis[v]==1)
         return true;
        else if(vis[v]==0)
        {
            vis[v]=1; 
        
            for(auto i:graph[v])
                if(isCyclic(graph, i, vis))
                     return true;
        }
        
       
        
        vis[v]=2;
        return false;
   }

	bool isPossible(int n, vector<pair<int, int>>& task) 
	{
	    vector<int> graph[n];
	    
	    for(int i=0; i<task.size(); i++)
	       graph[task[i].second].push_back(task[i].first);
	       
	    vector<int> vis(n, 0);
	  
	    for(int i=0; i<n; i++)
	      if(vis[i]==0&&isCyclic(graph, i, vis))
	        return false;
	      
	    return true;  
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends