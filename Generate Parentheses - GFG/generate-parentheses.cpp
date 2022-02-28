// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int open, int close, string str, vector<string>& res)
    {
        if(open == 0 && close == 0)  //leaf node has been reached
         {
             res.push_back(str);
             return;
         }
         
        if(open != 0)
        {
            string str1 = str;
            str1.push_back('(');
            //open--;
            solve(open - 1, close, str1, res);
        }
        
        if(close > open)
        {
            string str2 = str;
            str2.push_back(')');
            //close--;
            solve(open, close - 1, str2, res);
        }
        
        return;
    }
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string> res;
        int open = n;
        int close = n;
        
        string str = "";
        
        solve(open, close, str, res);
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
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends