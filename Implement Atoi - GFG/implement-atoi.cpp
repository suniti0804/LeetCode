// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
        int res=0;
        int i=0;
        if(str[i]=='-'||str[i]=='+')
          i++;
          
        while(str[i]>='0'&&str[i]<='9'&&i<str.size())
        {
            res=res*10+(str[i]-'0');
            i++;
        }
        
        if(i==str.size())
          return str[0]=='-'?-1*res:res;
        
        return -1;  
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends