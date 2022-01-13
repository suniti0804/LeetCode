// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str)
		{
		    if(str[0]=='0')
		      return 0;
		    int m=1000000007;
		    int n=str.size();
		    int t[n+1];
		    memset(t, 0, sizeof(t));
		    
		    t[0]=1;
		    t[1]=1;
		    
		    for(int i=2; i<=n; i++)
		    {
		        if(str[i-1]>'0')
		          t[i]+=t[i-1];
		        if(str[i-2]=='1'||(str[i-2]=='2'&&str[i-1]<'7'))
		          t[i]=(t[i]%m+t[i-2]%m)%m;
		    }
		    
		    return t[n];
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends