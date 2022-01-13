// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	int MinSquares(int n)
	{
	    vector<int> t(n+1, INT_MAX);
	    
	    t[0]=0;
	    int count=1;
	    
	    while(count*count<=n)
	    {
	        int s=count*count;
	        for(int i=s; i<=n; i++)
	          t[i]=min(t[i-s]+1, t[i]);
	        count++;   
	    }
	    
	    return t[n];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends