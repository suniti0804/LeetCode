// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
    
   int isValid(string s) 
   {
            int dotcount=0;
            string a="";
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]>='0' && s[i]<='9')
                {
                    if(a=="")
                    {
                        if(s[i]=='0')
                        {
                            if((i+1)<s.size() && s[i+1]!='.')
                                return 0;
                            
                        }
                    }
                    a+=s[i];
                }
                else if(s[i]=='.')
                {
                    dotcount++;
                    if(a!="")
                    {
                        int c=stoi(a);
                        if(c>255 || c<0)
                            return 0;
                        
                    }
                    else if(a=="")
                        return 0;
                    
                    a="";
                }
            }
            
            if(dotcount!=3)
                return 0;
            
            return 1;
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends