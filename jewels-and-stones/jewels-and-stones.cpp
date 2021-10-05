class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<int,int> mp;
        for(int i=0; i<jewels.size(); i++)
            mp[jewels[i]]++;
        
        int ctr=0;
        for(int i=0; i<stones.size(); i++)
            if(mp.find(stones[i])!=mp.end())
                ctr++;
        
        return ctr;
        
    }
};