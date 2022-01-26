class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) 
    {
        int n=arr.size();
        multiset<int, greater<int>> s;
        vector<int> res;
        
        for(int i=0; i<n; i++)
        {
            s.insert(arr[i]);
            if(s.size()>k)
                s.erase(s.find(arr[i-k]));
            if(s.size()==k)
                res.push_back(*s.begin());
        }
        
        return res;
    }
};