class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) 
    {
        vector<vector<int>> res;
        multiset<int> st;
        st.insert(0);  //very important line
        
        vector<pair<int, int>> h;
        
        for(auto i:buildings)
        {
            h.push_back({i[0], -i[2]});
            h.push_back({i[1], i[2]});
        }
        
        sort(h.begin(), h.end());
        
        int pre=0, curr;
        
        for(auto i:h)
        {
            if(i.second<0)
                st.insert(-i.second);
            else
                st.erase(st.find(i.second));
            curr=*(st.rbegin());
            if(pre!=curr)
            {
                res.push_back({i.first, curr});
                pre=curr;
            }
        }
        
        return res;
    }
};