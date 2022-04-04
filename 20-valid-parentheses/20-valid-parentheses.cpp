class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        if(s[0]==')'||s[0]=='}'||s[0]==']')
            return false;
        st.push(s[0]);
        int i=1;
        while(i<s.size())
        {
            if(st.empty()||s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(s[i]==')'&&st.top()!='(')
                    return false;
                if(s[i]=='}'&&st.top()!='{')
                    return false;
                if(s[i]==']'&&st.top()!='[')
                    return false;
                
                st.pop();
                
            }
            
            i++;
        }
        
        return st.empty();
        
    }
};