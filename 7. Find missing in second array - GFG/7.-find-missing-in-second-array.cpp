// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    vector<long long> res;
	    unordered_map<int, bool> mp;
	    
	    for(int i=0; i<N; i++)
	      mp[A[i]]=true;
	      
	    for(int i=0; i<M; i++)
	      mp[B[i]]=false;
	      
	    for(int i=0; i<N; i++)
	    {
	        if(mp[A[i]])
	          res.push_back(A[i]);
	    }
	    
	    return res;
	} 
};
	

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends