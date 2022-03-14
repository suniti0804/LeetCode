class Solution {
public:
    vector<vector<int>> generate(int r) 
    {
        vector<vector<int>> res;
        vector<vector<int>> arr(r, vector<int> (r));
        
        for(int i=0; i<r; i++)
        {
            vector<int> temp;
            for(int j=0; j<=i; j++)
            {
                if(j==0||j==i)
                    arr[i][j]=1;
                else
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                temp.push_back(arr[i][j]);
            }
            res.push_back(temp);
        }
        return res;
        
    }
};