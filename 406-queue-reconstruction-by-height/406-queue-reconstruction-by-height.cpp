class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {
        int n=people.size();
        vector<vector<int>> res;
        sort(people.begin(), people.end(), comp);
        
        for(int i=0; i<n; i++)
        {
            if(people[i][1]==res.size())
                res.push_back(people[i]);
            
            else
                res.insert(res.begin()+people[i][1], people[i]);
        }
        
        return res;
    }
};