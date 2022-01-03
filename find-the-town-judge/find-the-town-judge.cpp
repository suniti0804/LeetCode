class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        bool flag[n+1];
        unordered_map<int,int> mp;
        memset(flag, 0, sizeof(flag));
        
        for(int i=0; i<trust.size(); i++)
        {
            flag[trust[i][0]]=true;
            mp[trust[i][1]]++;
        }    
        
        for(int i=1; i<=n; i++)
            if(flag[i]==false&&mp[i]==n-1)
                return i;
        
        return -1;
        
    }
};