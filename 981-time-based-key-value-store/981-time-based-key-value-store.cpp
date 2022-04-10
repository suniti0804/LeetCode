class TimeMap {
public:
    
    unordered_map<string, vector<pair<string, int>>> mp;
    
    TimeMap() 
    {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        mp[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) 
    {
        if(mp.find(key)==mp.end())
            return "";
        auto& k=mp[key];
        
        int lo=0, hi=(int)k.size()-1;
        
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(k[mid].second>timestamp)
                hi=mid-1;
            else
                lo=mid+1;
        }
        
        if(hi<0)
            return "";
        return k[hi].first;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */