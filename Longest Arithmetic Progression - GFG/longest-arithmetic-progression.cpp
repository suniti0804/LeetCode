// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int nums[], int n) 
    {
       if(n <= 2)
          return n;

        int ans = 0;
        vector<unordered_map<int, int>> t(n);
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                int diff = nums[i] - nums[j];
                t[i][diff] = t[j].count(diff) > 0 ? t[j][diff] + 1 : 2;
                ans = max(ans, t[i][diff]);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends