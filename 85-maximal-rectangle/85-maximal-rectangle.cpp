class Solution {
public:
    
    int solve(vector<int>& heights)
    {
        heights.push_back(0);
        int n=heights.size();
        int res=0, width;
        stack<int> st;
        
        int i=0;
        while(i<n)
        {
            if(st.empty()||heights[i]>=heights[st.top()])
                st.push(i++);
            else
            {
                int k=st.top();
                st.pop();

                if(st.empty())
                    width=i;
                else
                    width=i-st.top()-1;

                res=max(res, heights[k]*width);
            }
        }
        
        return res;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int n=matrix[0].size();
        int res=0;
        vector<int> heights(n, 0);
        
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]=='1')
                    heights[j]++;
                else
                    heights[j]=0;
            }
            res=max(res, solve(heights));
        }
        
        return res;
        
    }
};