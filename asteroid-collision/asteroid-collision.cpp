class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) 
    {
        vector<int> res;
        stack<int> st;
        //st.push(a[0]);
        
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] > 0 || st.empty())
                st.push(a[i]);
            else
            {
                while(!st.empty() && st.top() > 0 && st.top() < abs(a[i]))
                    st.pop();
                if(!st.empty() && st.top() == abs(a[i]))
                    st.pop();
                else if(st.empty() || st.top() < 0)
                    st.push(a[i]);
            }
            
        }
        
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    
    
    }
};