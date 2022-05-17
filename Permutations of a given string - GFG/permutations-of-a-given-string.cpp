// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    void permutations(string str, int l, int r, vector<string>& res)
        {
                if(l == r)
                   res.push_back(str);
                else
                {
                    for(int i = l; i <= r; i++)
                  {
                     // Swapping done 
                        swap(str[l], str[i]); 
                        //sort(str.begin()+l+1, str.end());
             
                        // Recursion called 
                        permutations(str, l+1, r, res); 
             
                        //backtrack 
                        swap(str[l], str[i]); 
                  }
                } 
                
              return;
        }      
	
		vector<string>find_permutation(string S)
		{
		    int n = S.size();
		    vector<string> res;
		    permutations(S, 0, n - 1, res);
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