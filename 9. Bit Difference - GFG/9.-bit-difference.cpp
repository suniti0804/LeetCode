// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int countBits(int N, long long int A[])
    {
        int m=1000000007;
        long long res=0;
        
        for(int i=0; i<32; i++)
        {
            long long ctr=0;
            for(int k=0; k<N; k++)
              if((A[k]&(1<<i)))
                ctr++;
            
            res=(res+ctr*(N-ctr)*2)%m;  
        }
        
        return res;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends