// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	
   	long long int prime_Sum(int n)
   	{
   	    
   	    int isPrime[n+1];
	    memset(isPrime, 1, sizeof(isPrime));
	    
	    isPrime[0]=isPrime[1]=false;
	    
	    for(int i=2; i<=n; i++)
	    {
	        for(int p=2*i; p<=n; p+=i)
	          isPrime[p]=false;
	    }
   	    
   	    long long int sum=0;
   	    for(int i=2; i<=n; i++)
   	       if(isPrime[i])
   	         sum+=i;
   	         
   	    return sum;     
   	    
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
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends