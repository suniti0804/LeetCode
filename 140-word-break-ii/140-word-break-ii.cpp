class Solution {
public:
     void wb(vector<string>& res, vector<string>& dict, string s, int idx, int n, string str)
   {
       if(idx == n)
        {
            str.pop_back();
            res.push_back(str);
        }
        
        else
        {
            for(int k = idx; k < n; k++)
            {
                string temp = s.substr(idx, k - idx + 1);
                if(find(dict.begin(), dict.end(), temp) != dict.end())
                   wb(res, dict, s, k + 1, n, str + temp+' ');
                   
            }
        }
   }

    
    vector<string> wordBreak(string s, vector<string>& dict) 
    {
        vector<string> res;
        wb(res, dict, s, 0, s.size(), "");
        return res;
    }
};