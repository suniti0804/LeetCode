class Solution {
public:
    
    bool static comp(vector<int>&a, vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& p) 
    {
        sort(p.begin(), p.end(), comp);
        int res=0, mx=INT_MIN;
        
        for(int i=0; i<p.size(); i++)
        {
            if(p[i][1]<mx)
                res++;
            else
                mx=p[i][1];
        }
        return res;
    
    }
};