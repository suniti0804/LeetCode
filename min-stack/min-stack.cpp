class MinStack {
public:
    
    stack<long long> st;
    long long minEle = 0;   // declare a minimum element variable
    stack<long long> s;
    
    MinStack() 
    {
       while(s.size() > 0) 
           s.pop();
    }
    
    void push(int val) 
    {
        if(s.size() == 0){  // if size of stack is 0, then push the value and put minEle = value
            s.push(val);
            minEle = val;
            return;
        }
        else{
            if(val >= minEle){  // if value is greater than or equal to minEle then no need to change the value of minEle and push the value in the stack
                s.push(val);
            }else{  // else store the value in form 2*val - minEle in the stack as it would work as flag during pop function
                s.push((long long)(2*(long long)val) - minEle);
                minEle = val;
            }
        }
    }
    
    void pop() 
    {
         if(s.size() == 0) return;   // if stack is already empty return
        if(s.top() >= minEle){  // if top element is greater than or equal to minEle, simply pop the element from the top
            s.pop();
        }
        else{   /*
            s.top() = 2*val - minEle (as stored above)
            minEle = 2*val - s.top()
            here val is minEle as that is the element we need to pop here
            Therefor, minEle = 2*minEle - s.top()
        */
            minEle = 2*(minEle) - s.top();
            s.pop();
        }
    }
    
    int top() 
    {
         if(s.size() == 0) return -1;    // if stack is empty return -1
        if(s.top() >= minEle) return s.top();   // if top is greater than or equal to minEle return s.top()
        else{
            return minEle;  // else simply return minEle as in this case s.top() < minEle [which is a flag]
        }
    }
    
    int getMin() 
    {
        if(s.size() == 0) return -1;    // if stack is empty return -1
        return minEle; 
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