class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) 
    {
        int n=s.size();
        vector<bool> t(n+1, false);
        t[0]=true;
        
        for(int i=1; i<=n; i++)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(t[j])
                {
                    string str=s.substr(j, i-j);
                    auto it=find(dict.begin(), dict.end(), str);
                    if(it!=dict.end())
                    {
                        t[i]=true;
                        break;
                    }
                }
                
            }
        }
        return t[n];
        
    }
};