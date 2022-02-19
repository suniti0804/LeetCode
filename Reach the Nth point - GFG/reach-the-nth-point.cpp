// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n)
		{
		    long long t[n+1];
		    t[0]=1;
		    t[1]=2;
		    
		    for(long long i=2; i<n; i++)
		       t[i]=(t[i-1]+t[i-2])%1000000007;
		       
		    return t[n-1];     
		}
		
		//if order doesn't matter simply 1+(n/2);
		
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends