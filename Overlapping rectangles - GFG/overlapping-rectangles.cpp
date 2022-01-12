// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) 
    {
        /*if(L2[0]>R1[0]||L1[0]>R2[0]||L1[1]<R2[1]||L2[1]<R1[1])
          return 0;
        return 1;   */
        
        int x1=max(L1[0], L2[0]);
        int y1=max(R1[1], R2[1]);
        int x2=min(R1[0], R2[0]);
        int y2=min(L1[1], L2[1]);
        
        if(x1<=x2&&y1<=y2)
          return true;
        return false;  
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends