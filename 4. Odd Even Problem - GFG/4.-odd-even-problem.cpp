// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string oddEven(string S) 
    {
        unordered_map<int,int> mp;
        for(auto ch:S)
          mp[ch]++;
        
        int x=0, y=0;
        
        for(auto it:mp)
        {
            if((it.first-'a'+1)%2==0&&it.second%2==0)
              x++;
            if((it.first-'a'+1)%2!=0&&it.second%2!=0)
              y++;
        }
        
        return (x+y)%2==0?"EVEN":"ODD";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends