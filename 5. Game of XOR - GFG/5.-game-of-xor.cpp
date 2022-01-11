// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int gameOfXor(int N , int A[]) 
    {
        int res=0;
        for(int i=0; i<N; i++)
        {
            int freq=(N-i)*(i+1);
            if(freq%2!=0)
              res^=A[i];
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}  // } Driver Code Ends