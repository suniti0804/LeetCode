class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        stack<int> st;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < nums2.size(); i++)
        {
           while( st.size() > 0 && st.top() < nums2[i])
           {
               mp[st.top()] = nums2[i];
               st.pop();
           }    
                
            st.push(nums2[i]);
        }
        
        for(int i = 0; i < nums1.size(); i++)
        {
            if(mp.count(nums1[i]) != 0)
                res.push_back(mp[nums1[i]]);
            else
                res.push_back(-1);
        }
        
        return res;
        
    }
};