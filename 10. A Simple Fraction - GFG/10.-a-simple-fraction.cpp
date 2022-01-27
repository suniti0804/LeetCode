// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int num, int den) 
	{
	   string res=to_string(num/den);
	   int quotient=0;
	   int rem=0;
	   unordered_map<int,int> mp;
	   if(num%den==0)
	     return res;
	   
	   res+=".";
	   rem=num%den;
	   
	   while(rem != 0)
	    {
	        if(mp.find(rem) != mp.end())
	          {
	              int len = mp[rem];
	              res.insert(len, "(");
	              res += ")";
	              break;
	          }
	        else
	         {
	               mp[rem]=res.length();
	               rem*=10;
	               quotient=rem/den;
	               res+=to_string(quotient);
	               rem%=den;
	         }
	    }
	    
	   return res; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends