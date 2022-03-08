class Solution {
public:
    
    void wb(string s, vector<string>& res, int idx, vector<string>& dict, string curr)
    {
        if(idx==s.size())
        {
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        
        for(int k=idx; k<s.size(); k++)
        {
            string temp=s.substr(idx, k-idx+1);
            if(find(dict.begin(), dict.end(), temp)!=dict.end())
                wb(s, res, k+1, dict, curr+temp+' ');
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& dict) 
    {
        vector<string> res;
        wb(s, res, 0, dict, "");
        return res;
        
    }
};