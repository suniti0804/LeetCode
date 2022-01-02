class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        int ctr=0;
        unordered_map<int,int> mp;
        for(int i=0; i<time.size(); i++)
        {
            int x=time[i]%60;
            if(mp.find((60-x)%60)!=mp.end())
                ctr+=mp[(60-x)%60];
            mp[x]++;
        }
        
        
        
        return ctr;
        
    }
};