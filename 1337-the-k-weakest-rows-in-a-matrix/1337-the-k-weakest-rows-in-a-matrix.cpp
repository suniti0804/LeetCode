class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<int> res;
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<mat.size(); i++)
        {
            int ctr=0;
            for(int j=0; j<mat[0].size(); j++)
            {
                if(mat[i][j]==1)
                    ctr++;
                else
                    break;
            }
            pq.push({ctr, i});
            if(pq.size()>k)
                pq.pop();
        }
        
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
        
    }
};