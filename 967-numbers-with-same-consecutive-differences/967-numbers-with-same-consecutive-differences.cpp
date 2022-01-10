class Solution {
public:
    //jumping numbers, gfg
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        queue<int> q;
        
        for(int i=1;i<=9;i++)
            q.push(i);

        for(int i=1;i<n;i++)
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                int num = q.front();
                q.pop();
                int last = num%10;
                if(last+k<10)
                    q.push(num*10+last+k);
                if(last-k>=0 && k!=0)
                    q.push(num*10+last-k);
            }
        }
        
        vector<int> ans;
        if(n==1) 
            ans.push_back(0);
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};