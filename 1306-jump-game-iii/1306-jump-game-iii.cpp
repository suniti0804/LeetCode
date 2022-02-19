class Solution {
public:
    bool dfs(vector<int>& arr, vector<bool>& visited, int i)
    {
        if (i<0||i>=arr.size()||visited[i]) 
            return false;
        if (arr[i]==0) 
            return true;
        visited[i]=true;
        return dfs(arr, visited, i+arr[i])||dfs(arr, visited, i-arr[i]);
    }
    
    bool canReach(vector<int>& arr, int start) 
    {
        vector<bool> visited(arr.size(), false);
        return dfs(arr, visited, start);
    }
};