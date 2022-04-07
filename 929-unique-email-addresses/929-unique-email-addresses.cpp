class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_map<string, int> mp;
        for(auto str:emails)
        {
            string curr="";
            int n=str.size();
            int i=0;
            while(str[i]!='@')
            {
                if(str[i]=='+')
                    break;
                if(str[i]=='.')
                {
                    i++;
                    continue;
                }
                else
                {
                    curr+=str[i];
                    i++;
                }
            }
            
            while(str[i]!='@')
                i++;
            while(i<n)
                curr+=str[i++];
            //cout<<curr<<" ";
            mp[curr]++;
        }
        
        return mp.size();
        
    }
};