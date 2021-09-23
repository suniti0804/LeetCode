class Solution {
public:
    vector<string> commonChars(vector<string>& A) 
    {
        vector<int> cnt(26, INT_MAX);
        vector<string> res;
        
        for(auto s: A)
        {
            vector<int> temp(26, 0);
            for(auto c : s)
                temp[c - 'a']++;
            
            for(int i = 0; i < 26; i++)
               cnt[i] = min(cnt[i], temp[i]);
                
        }
        
        for(int i = 0; i < 26; i++)
          for(int j = 0; j < cnt[i]; j++)
                res.push_back(string(1, i + 'a'));
            //string(n, i + 'a')
            //duplicating the string n number of times
        
        return res;
     
    }
};