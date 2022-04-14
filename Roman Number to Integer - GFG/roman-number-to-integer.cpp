// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
    int val(char ch)
    {
        if(ch == 'I')
          return 1;
        if(ch == 'V')
          return 5;
        if(ch == 'X')
           return 10;
        if(ch == 'L')
           return 50;
        if(ch == 'C')
           return 100;
        if(ch == 'D')
           return 500;
        if(ch == 'M')   
           return 1000; 
        return -1;   
    }
  
    int romanToDecimal(string &str) 
    {
        int res=0;
        int n=str.size();

        int i=0;
        while(i<n)
        {
            int a=val(str[i]);
            int b=val(str[i+1]);
            
            if(b>a)
            {
                res+=b-a;
                i+=2;
            }
            
            else
            {
                res+=a;
                i++;
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends