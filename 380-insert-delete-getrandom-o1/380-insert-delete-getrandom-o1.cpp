class RandomizedSet {
    vector<int> nums;
    unordered_map<int, int> mp;
public:
    RandomizedSet() 
    {

    }
    
    bool insert(int val) 
    {
        if(mp.find(val)!=mp.end())
            return false;
        nums.push_back(val);
        mp[val]=nums.size()-1;
        return true;
    }
    
    bool remove(int val) 
    {
        if(mp.find(val)==mp.end())
            return false;
        int l=nums.back();
        mp[l]=mp[val];
        nums[mp[val]]=l;
        nums.pop_back();
        mp.erase(val);
        return true;   
    }
    
    int getRandom() 
    {
         return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */