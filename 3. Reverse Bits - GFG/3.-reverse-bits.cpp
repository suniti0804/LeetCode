// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    /*long long reversedBits(long long X) 
    {
        long long res=0;
        vector<long long> v;
        while(X)
        {
            int digit=X%2;
            v.push_back(digit);
            X/=2;
        }
        
        
        int k=31;
        for(int i=0; i<v.size(); i++)
          res+=pow(2,k--)*v[i];
          
        return res;  
    } */
    
     long long reversedBits(long long n) 
    {
        long long res = 0;
        long long power = 31;
        
        while(n)
        {
            res+=(n&1)<<power;
            n=n>>1;
            power--;
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}  // } Driver Code Ends