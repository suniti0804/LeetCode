// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s)
		{
		    vector<string> ans;
            int n = s.length();
            for(int mask = 0; mask < (1 << n); mask++) 
            {
                string t;
                for(int i = 0; i < n; i++) 
                {
                    if(mask & (1 << i))
                      t += s[i];
                }
                if(!t.empty())
                  ans.push_back(t);
            }
            
            sort(ans.begin(), ans.end());
            return ans;
		  
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends