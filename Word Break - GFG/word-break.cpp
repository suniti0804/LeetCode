// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        int n=A.size();
        vector<bool> t(n+1, false);
        t[0]=true;
        
        for(int i=1; i<=n; i++)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(t[j])
                {
                    string str=A.substr(j, i-j);
                    auto it=find(B.begin(), B.end(), str);
                    if(it!=B.end())
                    {
                        t[i]=true;
                        break;
                    }
                }
            }
        }
        return t[n];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends