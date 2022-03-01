// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxCoins(vector<int>&nums,int n)
    {
        vector<vector<int>> t(n, vector<int>(n, -1));
        
        for (int i=0; i<n; i++) 
            t[i][i]=nums[i];
        
        for (int i=1; i<n; i++)
        {
            for (int j=0; j+i<n; j++) 
            {
                if(i==0)
                  t[j][j]=nums[j];
                else if(i==1)
                  t[j][j+i]=max(nums[j], nums[j+i]);
                else
                {
                   t[j][j+i]=max(nums[j]+min(t[j+2][j+i], t[j+1][j+i-1]),
	                             nums[j+i]+min(t[j][j+i-2], t[j+1][j+i-1]));
                }
            }
        }
            
        
        return t[0][n-1]; 
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