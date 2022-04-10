class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> res;
        for(auto ch:ops)
        {
            int n=res.size();
            if(ch=="+")
                res.push_back(res[n-1]+res[n-2]);
            else if(ch=="D")
                res.push_back(res[n-1]*2);
            else if(ch=="C")
                res.pop_back();
            else
                res.push_back(stoi(ch));
        }
        
        int ans=0;
        for(auto nums:res)
            ans+=nums;
        
        return ans;
        
    }
};