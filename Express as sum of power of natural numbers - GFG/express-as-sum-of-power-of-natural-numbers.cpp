// { Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int numOfWays(int n, int x)
    {
        vector<long long> v(n,0);
        for (int i =0; i <n; i++)
           v[i]=(long long int)pow(i+1,x);
        
        int sum=n;
        long long int t[n+1][sum+1];

        for(int i=0;i<=n;i++)
            t[i][0]=1;
        for(int j=1;j<=sum;j++)
            t[0][j]=0;

        for (int i=1; i <=n; ++i)
        {
           for (int j = 1; j <=sum; ++j)
           {
               if(v[i-1]<=j)
                 t[i][j]=(t[i-1][j-v[i-1]]+t[i-1][j])%(1000000007);
               else
                 t[i][j]=t[i-1][j]%(1000000007);
           }
        }
        
        return t[n][sum]%(1000000007);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}
  // } Driver Code Ends