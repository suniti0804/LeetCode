class Solution {
public:
    string longestWord(vector<string>& words) 
    {
        unordered_map<string, int> mp;
        for(auto str:words)
            mp[str]++;
        string ans="";
        
        for(auto str:words)
        {
            cout<<str<<" ";
            int len=1;
            while(len<=str.size())
            {
                string curr=str.substr(0, len);
                if(mp[curr]<=0)
                    break;
                len++;
            }    
            if(len>str.size())
            {
                if(ans.size()==str.size())
                    ans=min(ans, str);
                else if(ans.size()<str.size())
                    ans=str;
            }
              
        }
        
        return ans;
        
    }
};