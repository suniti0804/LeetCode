// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) 
    {
        int m = s.size();
        int n = t.size();
        
        int dp[m + 1][n + 1];
        
        for(int i = 0; i <= m; i++)
          {
              for(int j = 0; j <= n; j++)
               {
                   //if first string is empty, then we need to insert all 
                   //the characters of second string
                   if(i == 0)
                     dp[i][j] = j;
                   //if second string is empty, then we need to delete all
                   //the characters of first string
                   else if(j == 0)
                     dp[i][j] = i;
                   //if last characters are same then ignoring them and
                   //recuring for rest of the string
                   else if(s[i - 1] == t[j - 1])
                     dp[i][j] = dp[i - 1][j - 1];
                   //if they are diiferent, then insert minimum possibility
                   else
                     dp[i][j] = 1 + min(dp[i][j - 1], //insert 
                               min(dp[i - 1][j], //remove
                               dp[i - 1][j - 1]));  //replace
                     
               }
          }
          
        return dp[m][n]; 
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends