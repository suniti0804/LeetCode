class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        vector<int> res(triangle[triangle.size()-1]);
        for(int i= triangle.size()-2; i>=0; --i)
            for(int j=0; j<triangle[i].size();++j)
                res[j] = triangle[i][j] + min(res[j],res[j+1]);
        return res[0];      
    }
};