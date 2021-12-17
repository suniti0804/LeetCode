class Solution {
public:
    
    void solve(int n, int k, int l, vector<int>& temp, vector<vector<int>>& res)
    {
        if(temp.size()==k)
        {
            res.push_back(temp);
            return;
        }
        
        for(int i=l; i<n; i++)
        {
            temp.push_back(i+1);
            solve(n, k, i+1, temp, res);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> res;
        vector<int> temp;
        solve(n, k, 0, temp, res);
        return res;
        
    }
};