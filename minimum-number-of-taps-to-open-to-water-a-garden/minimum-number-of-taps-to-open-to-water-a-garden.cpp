class Solution {
public:
    int minTaps(int n, vector<int>& ranges) 
    {
        vector<int> t(n + 1, -1);
        for(int i = 0; i <= n; i++)
        {
            int left_idx = max(i - ranges[i], 0);
            int right_idx = min(i + ranges[i], n);
            t[left_idx] = max(t[left_idx], right_idx);
        }
        
        if(t[0] == -1)
            return -1;
        int res = 1;
        int curr = t[0];
        int next = 0;
        int i = 0;
        
        while(curr < n)
        {
            while(i <= curr)
            {
                next = max(next, t[i]);
                i++;
            }
            
            if(next == curr)
                return -1;
            curr = next;
            res++;
        }
        
        return res;
    }
};