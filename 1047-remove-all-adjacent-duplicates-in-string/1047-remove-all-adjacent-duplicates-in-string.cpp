class Solution {
public:
    string removeDuplicates(string s) 
    {
        string res="";
        stack<char> st;
        st.push(s[0]);
        
        for(int i=1; i<s.size(); i++)
        {
            if(!st.empty()&&s[i]==st.top())
                    st.pop();
            
            else
                st.push(s[i]);
        }
        
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};