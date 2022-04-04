class Solution {
public:
    
     string keyPad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "qprs", "tuv", "wxyz"};
    
    void solve(string digits, string curr, int index, vector<string>& res)
    {
        if(index==digits.size())
        {
            res.push_back(curr);
            return;
        }
        
        for(auto ch:keyPad[digits[index]-'0'])
        {
            curr[index]=ch;
            solve(digits, curr, index+1, res);
        }
    }
    
    vector<string> letterCombinations(string digits) 
    {
        if(digits.size()==0)
            return {};
        vector<string> res;
        string curr=digits;
        solve(digits, curr, 0, res);
        return res;    
    }
};