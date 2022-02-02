class Solution {
public:
    
    void solve(string str, int k, string& res, int ctr)
    {
        if(k==0)
           return;
        
        int n=str.size();
        char curr_max=str[ctr];
        
        for(int j=ctr+1; j<n; j++)
          curr_max=max(curr_max, str[j]);
          
        if(curr_max!=str[ctr])
          k--;
          
        for(int j=n-1; j>=0; j--)
        {
            if(str[j]==curr_max)
            {
                swap(str[j], str[ctr]);
                if(str.compare(res)>0)
                  res=str;
                solve(str, k, res, ctr+1);
                swap(str[j], str[ctr]);
            }
        }
    }
    
    int maximumSwap(int num)
    {
        string str=to_string(num);
        string res=str;
        solve(str, 1, res, 0);
        return stoi(res);
    }
    
    /*int maximumSwap(int num) 
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
    }  */
};