// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    void solve(int fibo[], int n)
    {
        fibo[0] = 0;
        fibo[1] = 1;
        
        for(int i = 2; i <= n; i++)
          fibo[i] = (fibo[i-1] + fibo[i-2]) % 10;
    }

    int fib(int N)
    {
        int fibo[60];
        solve(fibo, 60);
        return fibo[N%60];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends