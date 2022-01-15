// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    /*vector<string> permutation(string S)
    {
        vector<string> res;
        sort(S.begin(), S.end());
        res.push_back(S);
        
        while(next_permutation(S.begin(), S.end()))
          res.push_back(S);
          
        return res;  
        
    }  */
    
    void solve(string S, int s, int e, vector<string>& res)
    {
        if(s==e)
        {
            res.push_back(S);
            return;
        }
        
        for(int i=s; i<=e; i++)
        {
            swap(S[s], S[i]);
            solve(S, s+1, e, res);
            swap(S[s], S[i]);
        }
        
        return;
    }
    
    vector<string> permutation(string S)
    {
        vector<string> res;
        //sort(S.begin(), S.end());
        int n=S.size();
        
        solve(S, 0, n-1, res);
        sort(res.begin(), res.end());
        return res;
    }
    
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends