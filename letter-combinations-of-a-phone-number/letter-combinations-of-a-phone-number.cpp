class Solution {
public:
    
    string keyPad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "qprs", "tuv", "wxyz"};
    
    void solve(string& digits, int index, string temp, vector<string>& res)
    {
        if(index==digits.size())
        {
            res.push_back(temp);
            return;
        }
        
        for(char c:keyPad[digits[index]-'0'])
        {
            temp[index]=c;
            solve(digits, index+1, temp, res);
        }
    }
    
    vector<string> letterCombinations(string digits) 
    {
        vector<string> res;
        if(digits.size()==0)
            return res;
        string temp=digits;
        
        solve(digits, 0, temp, res);
        return res;
        
    }
};