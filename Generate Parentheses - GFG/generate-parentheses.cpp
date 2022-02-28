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
        if(open==0&&close==0)
        {
            res.push_back(str);
            return;
        }
        
        if(open!=0)
        {
            string str1=str;
            str1.push_back('(');
            solve(open-1, close, str1, res);
        }
        
        if(open<close)
        {
            string str2=str;
            str2.push_back(')');
            solve(open, close-1, str2, res);
        }
        
        return;
    }
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string> res;
        string str="";
        
        solve(n, n, str, res);
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