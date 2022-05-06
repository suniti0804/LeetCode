class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        vector<pair<char, int>> st = {{'@', 0}};
        for(int i = 0; i < s.size(); i++)
        {
            if(st.back().first != s[i])
                st.push_back({s[i], 1});
            else
                st.back().second++;
            
            if(st.back().second == k)
                st.pop_back();
        }
        
        string res;
        for(auto &it : st)
            res.append(it.second, it.first);
        
        return res;
    }
};