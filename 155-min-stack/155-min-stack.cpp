class MinStack {
    
    stack<long long> st;
    long long min_ele=0;
    
public:
    MinStack() 
    {
        while(st.size()>0)
            st.pop();
    }
    
    void push(int val) 
    {
        if(st.empty())
        {
            st.push(val);
            min_ele=val;
            return;
        }
        
        else
        {
            if(val>=min_ele)
                st.push(val);
            else
            {
                st.push((long long)(2*(long long)val-min_ele));
                min_ele=val;
            }
        }
    }
    
    void pop() 
    {
       if(st.empty())
           return;
        if(st.top()>=min_ele)
            st.pop();
            
        else
        {
            min_ele=2*min_ele-st.top();
            st.pop();
        }
    }
    
    int top() 
    {
        if(st.empty())
            return -1;
        if(st.top()>=min_ele)
            return st.top();
        else
            return min_ele;
    }
    
    int getMin() 
    {
        if(st.empty())
            return -1;
        return min_ele;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */