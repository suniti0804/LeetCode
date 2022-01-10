// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> res;
        int n=1000001;
        
        int isPrime[n+1];
        for(int i=0; i<=n; i++)
          isPrime[i]=1;
        
        isPrime[0]=isPrime[1]=0;
        
        for(long long i=2; i*i<n; i++)
        {
            if(isPrime[i]==1)
            {
                for(int p=2*i; p<=n; p+=i)
                  isPrime[p]=0;
            }
        }
        
        for(int i=1; i<=n; i++)
          isPrime[i]+=isPrime[i-1];
        
        for(int i=0; i<q; i++)
          res.push_back(isPrime[(int)sqrt(query[i])]);    
        
        return res;
    }
    
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}  // } Driver Code Ends