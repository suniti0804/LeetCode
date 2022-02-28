// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    int kvowelwords(int N, int K) 
    {
        const int MOD = 1e9+7;
        
        vector<vector<long long>> t(N+1, vector<long long> (K+1));
        
        for(int i=0; i<=N; i++)
        {
            for(int j=0; j<=K; j++)
            {
                if(i==0)
                   t[i][j]=1;
                else
                {
                    t[i][j]=t[i-1][K]*21%MOD;
                    if(j>0)
                      t[i][j]=(t[i][j]+t[i-1][j-1]*5%MOD)%MOD;
                }
            }
        }
        
        return t[N][K];
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends