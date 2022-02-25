// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2)
    {
        int i=0,j;
        int res=0;
        while(i<str2.size())
        {
            if(str2[i]==str1[0])
            {
                j=0;
                while(str2[i]==str1[j]&&i<str2.size()&&j<str1.size())
                {
                    i++;
                    j++;
                }
            }
            else
              i++;
            res=max(res, j);
        }
        return {0,res-1};
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}
  // } Driver Code Ends