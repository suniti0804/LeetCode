// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    string res="";
	    int i=A.size()-1;
	    int j=B.size()-1;
	    int carry=0;
	    int sum=0;
	    
	    while(i>=0||j>=0)
	    {
	        int a=0, b=0;
	        if(i>=0)
	         a=A[i]-'0';
	        if(j>=0)
	         b=B[j]-'0';
	        if(carry==1)
	        {
	            if(a==1&&b==1)
	            {
	                res+='1';
	                carry=1;
	            }
	            
	            else if(a==1||b==1)
	            {
	                res+='0';
	                carry=1;
	            }
	            
	            else
	            {
	                res+='1';
	                carry=0;
	            }
	        }
	        
	        else
	        {
	            if(a==1&&b==1)
	            {
	                res+='0';
	                carry=1;
	            }
	            else if(a==1||b==1)
	            {
	                res+='1';
	                carry=0;
	            }
	            else
	            {
	                res+='0';
	                carry=0;
	            }
	        }
	        
	        i--;
	        j--;
	    }
	    
	    if(carry)
	      res+=to_string(carry);
	    while(!res.empty()&&res.back()=='0')
	      res.pop_back();
	    reverse(res.begin(), res.end());
	    return res;
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends