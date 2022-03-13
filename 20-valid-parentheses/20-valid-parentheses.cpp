class Solution {
public:
    bool isValid(string s) {
         if(s[0]==')'||s[0]==']'||s[0]=='}')
           return false;
        stack<char> st;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{'||st.empty())
                st.push(s[i]);
            else
            {
                if(s[i]==')'&&st.top()!='(')
                    return false;
                if(s[i]==']'&&st.top()!='[')
                    return false;
                if(s[i]=='}'&&st.top()!='{')
                    return false;
                st.pop();
            }
            i++;
        }
        return st.empty();
    }
};