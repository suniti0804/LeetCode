class Solution {
public:
    
    bool static comp(pair<int, int>& a, pair<int, int>& b)
    {
        if(a.first==b.first)
            return a.second>b.second;
        return a.first<b.first;
    }
    
    int maxEnvelopes(vector<vector<int>>& env) 
    {
        int n=env.size();
        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++)
            vec.push_back({env[i][0], env[i][1]});
        sort(vec.begin(), vec.end(), comp);
        vector<int> t;
        
        for(int i=0; i<n; i++)
        {
            auto it=lower_bound(t.begin(), t.end(), vec[i].second);
            if(it==t.end())
                t.push_back(vec[i].second);
            else
                *it=vec[i].second;
        }
        
        return t.size();
        
    }
};