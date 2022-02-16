// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        int n=matrix.size(),m=matrix[0].size();
        set<pair<int,int>> st;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(matrix[i][j]==0) continue;
                for(int k=j+1;k<m;k++)
                {
                    if(matrix[i][k]==0) 
                       continue;
                    if(st.count({j,k})) 
                       return true;
                    st.insert({j,k});
                }
            }
        }
        return false;
       
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;

        vector<vector<int> > matrix(row);
            
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }

    return 0;
} 


  // } Driver Code Ends