class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gr) 
    {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> mp;
        
        for(int i=0; i<gr.size(); i++)
        {
            if(mp[gr[i]].size()<gr[i])
                mp[gr[i]].push_back(i);
            else
                mp[gr[i]]={i};
            
            if(mp[gr[i]].size()==gr[i])
            {
                res.push_back(mp[gr[i]]);
                mp.erase(gr[i]);
            }        
                
        }
        
        return res;
    
        
    }
};