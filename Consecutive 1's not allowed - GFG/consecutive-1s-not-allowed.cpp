// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) 
	{
	    vector<ll> t(n+1, 0);
	    t[0]=1;
	    t[1]=2;
	    for(int i=2; i<=n; i++)
	       t[i]=(t[i-1]+t[i-2])%1000000007;
	       
	    return t[n];    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends