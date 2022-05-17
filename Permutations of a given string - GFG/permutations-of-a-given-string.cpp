// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    void permutations(string str, int l, vector<string>& res)
    {
        if(l==str.size()-1)
        {
            res.push_back(str);
            return;
        }  
        
        for(int i=l; i<str.size(); i++)
        {
            swap(str[l], str[i]); //swapping done
            permutations(str, l+1, res); //Recursion called 
            swap(str[l], str[i]); //backtrack
        }
         
        
        return;
    }      
	
		vector<string>find_permutation(string S)
		{
		    int n = S.size();
		    vector<string> res;
		    permutations(S, 0, res);
		    sort(res.begin(), res.end());
		    res.erase(unique(res.begin(), res.end()), res.end());
		    return res;
		   
        }
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends