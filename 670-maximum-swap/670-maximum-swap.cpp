class Solution {
public:
    
    int maximumSwap(int num) 
    {
        string res=to_string(num);
        int n=res.size();
        int max_digit=-1, left_idx=-1, right_idx=-1, max_idx=-1;
        
        for(int i=n-1; i>=0; i--)
        {
            if(res[i]-'0'>max_digit)
            {
                max_digit=res[i]-'0';
                max_idx=i;
                continue;
            }
            
            if(res[i]-'0'<max_digit)
            {
                left_idx=i;
                right_idx=max_idx;
            }
        }
        
        if(left_idx==-1)
            return stoi(res);
        swap(res[left_idx], res[right_idx]);
        return stoi(res);
    }
};