// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxCoins(vector<int>&piles,int n)
    {
       
        vector<vector<int>>dp(n, vector<int>(n));
        
        for(int gap = 0; gap < n; gap++)
            for(int i = 0, j = gap; j < n; i++, j++){
                if(gap == 0) dp[i][j] = piles[i];
                else if(gap == 1) dp[i][j] = max(piles[i], piles[j]);
                else{
                    int case1 = piles[i] + min(dp[i+2][j], dp[i+1][j-1]);
                    int case2 = piles[j] + min(dp[i+1][j-1], dp[i][j-2]);
                    dp[i][j] = max(case1, case2); // maximum of these 2 cases
                }
            }
        return dp[0][n-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends