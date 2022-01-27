// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int num, int den) 
	{
	   string res="";
	   if(num==0)
	     return "0";
	   if(num>0^den>0)
	     res+="-";
	   if(num%den==0)
	     return to_string(num/den);
	   unordered_map<long, int> mp;  
	     
	   long n=abs(num);
	   long d=abs(den);
	   res+=to_string(n/d);
	   res+=".";
	   long rem=0;
	   long quotient=0;
	   rem=n%d;
	   
	   while(rem)
	   {
	       if(mp.find(rem)!=mp.end())
	       {
	           res.insert(mp[rem], "(");
	           res+=")";
	           break;
	       }
	       
	       mp[rem]=res.length();
	       rem*=10;
	       res+=to_string(rem/d);
	       rem%=d;
	       
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