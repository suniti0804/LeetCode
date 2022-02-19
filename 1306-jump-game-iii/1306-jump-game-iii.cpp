class Solution {
public:
    bool dfs(vector<int>& arr, vector<bool>& vis, int i)
    {
        if (i<0||i>=arr.size()||vis[i]) 
            return false;
        if (arr[i]==0) 
            return true;
        vis[i]=true;
        return dfs(arr, vis, i+arr[i])||dfs(arr, vis, i-arr[i]);
    }
    
    bool canReach(vector<int>& arr, int start) 
    {
        int n=arr.size();
        vector<bool> vis(n, false);
        return dfs(arr, vis, start);
    }
};