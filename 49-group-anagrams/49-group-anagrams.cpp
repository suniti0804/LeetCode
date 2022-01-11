class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        
        for(auto s:strs)
        {
            string curr=s;
            sort(curr.begin(), curr.end());
            mp[curr].push_back(s);
        }
        
        for(auto i:mp)
            res.push_back(i.second);
        
        return res;
        
    }
};