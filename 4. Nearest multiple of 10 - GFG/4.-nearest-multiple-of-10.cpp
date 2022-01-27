// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string N) 
    { 
        int n=N.size();
        if(N[n-1]<='5')
        {
            N[n-1]='0';
            return N;
        }
        
        N[n-1]='0';
        int i=n-2;
        while(N[i]=='9'&&i>=0)
        {
            N[i]='0';
            i--;
        }    
        
        if(i<0)
          N.insert(0, "1");
        else
          N[i]+=1;
          
        return N;  
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