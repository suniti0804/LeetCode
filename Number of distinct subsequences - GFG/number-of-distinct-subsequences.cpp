// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    int n=s.size();
	    vector<int> lastIndex(256, -1);
	    vector<long long> t(n+1);
	    
	    t[0]=1;
	    
	    for(int i=1; i<=n; i++)
	    {
	        t[i]=(2*t[i-1])%1000000007;
	        if(lastIndex[s[i-1]]!=-1)
	           t[i]=(t[i]-t[lastIndex[s[i-1]]]+1000000007)%1000000007;
	        lastIndex[s[i-1]]=i-1;    
	    }
	    return t[n]%1000000007;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends