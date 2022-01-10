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
        vector<int> isPrime(n+1, 1);
        
        isPrime[0]=isPrime[1]=0;
        
        for(int i=2; i*i<=n; i++)
        {
            if(isPrime[i]==1)
            {
                for(int j=2*i; j<=n; j+=i)
                  isPrime[j]=0;
            }
        }
        
        for(int i=2; i<=n; i++)
          isPrime[i]+=isPrime[i-1];
          
        for(auto q:query)
           res.push_back(isPrime[(int)sqrt(q)]);
        
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