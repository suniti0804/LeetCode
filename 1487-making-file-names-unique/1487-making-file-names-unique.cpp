class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) 
    {
        vector<string> res;
        unordered_map<string, int> mp;
        for(auto str:names)
        {
            string curr=str;
            int k=mp[curr];
            while(mp[curr]>0)
            {
                curr=str+"("+to_string(k++)+")";
                mp[str]=k;
            }
            mp[curr]++;
            res.push_back(curr);
        }
        return res;
        
    }
};