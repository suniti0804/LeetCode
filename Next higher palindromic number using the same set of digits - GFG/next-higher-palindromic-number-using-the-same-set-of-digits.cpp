// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    string nextPermutation(string str)
    {
        int i, j;
        int n=str.size();
        
        for(i=n-2; i>=0; i--)
          if(str[i]<str[i+1])
            break;
            
        if(i<0)
          return "-1";
          
        for(j=n-1; j>i; j--)
          if(str[j]>str[i])
            break;
            
        swap(str[j], str[i]);
        reverse(str.begin()+i+1, str.end());
        return str;
    }
  
    string nextPalin(string str) 
    {
        int n=str.size();
        int mid=n/2;
        
        if(n<=3)
           return "-1";
        
        string res=nextPermutation(str.substr(0, mid));
        if(res=="-1")
          return res;
        string ans=res;
        
        if(n&1)
          ans+=str[mid];
        
        reverse(res.begin(), res.end());
        ans+=res;
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}  // } Driver Code Ends