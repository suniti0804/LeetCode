class Solution {
public:
    
    void solve(int open, int close, string curr, vector<string>& res)
    {
        if(open==0&&close==0)
        {
            res.push_back(curr);
            return;
        }
        
        if(open>0)
        {
            string str1=curr;
            str1.push_back('(');
            solve(open-1, close, str1, res);
        }
        
        if(open<close)
        {
            string str2=curr;
            str2.push_back(')');
            solve(open, close-1, str2, res);
        }
    }
    
    vector<string> generateParenthesis(int n) 
    {
        vector<string> res;
        int open=n, close=n;
        
        string curr="";
        
        solve(open, close, curr, res);
        
        return res;
        
    }
};