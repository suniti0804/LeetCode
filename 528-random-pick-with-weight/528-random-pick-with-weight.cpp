class Solution {
public:
    
    vector<int> arr;
    
    Solution(vector<int>& w) 
    {
        arr.push_back(w[0]);
        for(int i=1; i<w.size(); i++)
            arr.push_back(arr[i-1]+w[i]);
    }
    
    int pickIndex() 
    {
        int n=rand()%arr[arr.size()-1];
        auto it=upper_bound(arr.begin(), arr.end(), n)-arr.begin();
        return it;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */