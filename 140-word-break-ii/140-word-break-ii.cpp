class Solution {
public:
    
    void helper(string s, vector<string>& dict, vector<string>& res, int idx, int n, string curr)
    {
        if(idx==n)
        {
            curr.pop_back();
            res.push_back(curr);
        }
        
        for(int k=idx; k<n; k++)
        {
            string str=s.substr(idx, k-idx+1);
            if(find(dict.begin(), dict.end(), str)!=dict.end())
                helper(s, dict, res, k+1, n, curr+str+' ');
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& dict) {
        vector<string> res;
        helper(s, dict, res, 0, s.size(), "");
        return res;
    }
};