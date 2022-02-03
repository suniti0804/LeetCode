// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ExcelColumn(int n)
    {
        string res;
        char tmp;
        while(n)
        {
           n -= 1;
           tmp = 'A' + n % 26;
           //res += tmp;
           res = tmp + res;
           n /= 26;
        }

         return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends