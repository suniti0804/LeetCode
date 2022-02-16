// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> matrix)
    {
         unordered_map<string, int> row, box, col;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(matrix[i][j]!=0)
                {
                    string val=to_string(matrix[i][j]);
                    string r=to_string(i)+val;
                    string c=to_string(j)+val;
                    string b=to_string(i/3)+to_string(j/3)+val;
           
                    if(row.find(r)!=row.end())
                        return false;
                    if(col.find(c)!=col.end())
                        return false;
                    if(box.find(b)!=box.end())
                        return false;
                    
                    row[r]++;
                    col[c]++;
                    box[b]++;
                }
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends