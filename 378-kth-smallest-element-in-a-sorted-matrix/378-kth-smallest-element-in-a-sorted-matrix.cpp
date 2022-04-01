class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
         int n = matrix.size();
        //int count = 0;
        priority_queue<pair<int,pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minh;
        
        for(int i = 0; i < n; i++)
            minh.push(make_pair(matrix[i][0], make_pair(i, 0)));
        
        int ans;
        while(k--)
        {
            int e = minh.top().first;
            int i = minh.top().second.first;
            int j = minh.top().second.second;
            ans = e;
            minh.pop();
            if(j != n - 1)
                minh.push(make_pair(matrix[i][j + 1], make_pair(i, j + 1)));
        }
        
        return ans;
        
    }
};