class Solution {
public:
    
    bool isMatch(string str, string pat)
    {
        int n=str.size();
        
        unordered_map<char, char> mp;
        vector<bool> visited(26,0);
        
        for(int i=0; i<n; i++)
        {
            char c1=str[i];
            char c2=pat[i];
            
            if(mp[c1]&&mp[c1]!=c2)
                return false;
            if(!mp[c1]&&visited[c2-'a']==true)
                return false;
            mp[c1]=c2;
            visited[c2-'a']=true;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> res;
        
        for(int i=0; i<words.size(); i++)
            if(isMatch(words[i],pattern))
                res.push_back(words[i]);
        
        return res;
        
    }
};