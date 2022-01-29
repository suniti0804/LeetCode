class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        heights.push_back(0);
        int n = heights.size();
        stack<int> st;
        int res = 0;
        
        int i = 0;
        while(i < n)
        {
            if(st.empty() || heights[i] >= heights[st.top()])
              st.push(i++);
            else
             {
                 int top = st.top();
                 st.pop();
                 res = max(res, heights[top] * (st.empty() ? i : i - st.top() - 1));
             }
        }
        
        return res;
        
    }
};