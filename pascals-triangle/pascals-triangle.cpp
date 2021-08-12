class Solution {
public:
    
   /* int calculate(int line, int col) //calculation of binomial coefficient
    {
        int res = 1;
        if (col > line - col)
        col = line - col;
        for (int i = 0; i < col; ++i)
        {
            res *= (line - i);
            res /= (i + 1);
        }

        return res;
        
    }
    
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> res;
        
        for(int line = 0; line < numRows; line++)
        {
            vector<int> temp;
            for(int col = 0; col <= line; col++)
               temp.push_back(calculate(line, col));
            
            res.push_back(temp);
        }
        
        return res; 
    }    
    
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> res;
         int arr[n][n];
 
    // Iterate through every line and
    // print integer(s) in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of integers
        // equal to line number
        vector<int> temp;
        for (int i = 0; i <= line; i++)
        {
        // First and last values in every row are 1
        if (line == i || i == 0)
            arr[line][i] = 1;
        // Other values are sum of values just
        // above and left of above
        else
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i];
        temp.push_back(arr[line][i]);
        }
        res.push_back(temp);
    }
    
        return res;    
    }      */
    
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> res;
        for (int line = 1; line <= n; line++)
        {
            int C = 1; // used to represent C(line, i)
            vector<int> temp;
            for (int i = 1; i <= line; i++)
            {
                // The first value in a line is always 1
                temp.push_back(C);
                C = C * (line - i) / i;
            }
            res.push_back(temp);
        }
        
        return res;
    }
    
};