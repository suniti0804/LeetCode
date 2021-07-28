class Solution {
public:

    void dfs(vector<vector<int>>& isConnected, vector<vector<int>>& visited, int u, int v)
    {
        //if(u < 0 || u > isConnected.size() || v < 0 || v > isConnected.size()) 
           // return ;
        visited[u][v] = 1;
        visited[v][u] = 1;
        for(int i = 0; i < isConnected[0].size(); i++)
         {
             if(visited[v][i] == 0 && isConnected[v][i] == 1)
              dfs(isConnected, visited, v, i);
         }
        return;
    }

    
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n = isConnected.size();
        int res = 0;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(!visited[i][j] && isConnected[i][j] == 1) 
                {
                    dfs(isConnected, visited, i, j);
                    res++;
                }
            }
        }
        return res;
    }
};