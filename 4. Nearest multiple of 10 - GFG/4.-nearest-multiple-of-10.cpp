// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string s) 
    { 
       int n=s.size();
       if(s[n-1]<='5')
       {
           s[n-1]='0';
           return s;
       }
       
       s[n-1]='0';
       int i=n-2;
       
       while(s[i]=='9'&&i>=0)
       {
           s[i]='0';
           i--;
       }
       
       if(i<0)
         s.insert(0, "1");
       else
         s[i]+=1;
    
       return s;     
    }  

};

// { Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }
    
	return 0;
}  // } Driver Code Ends