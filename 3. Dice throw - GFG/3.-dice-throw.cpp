// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
 
    long long noOfWays(int M , int N , int X) 
    {
        //int m=1000000007;
        vector<vector<long long>> t(N+1, vector<long long>(X+1, 0));
        
        t[0][0]=1;
        
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=X; j++)
            {
                for(int k=1; k<=M; k++)
                {
                    if(k<=j)
                      t[i][j]+=t[i-1][j-k];
                }
            }
        }
        
        return t[N][X];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}  // } Driver Code Ends