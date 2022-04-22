// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    if(S1.size()!=S2.size())
       return false;
    int ctr=0, prev=-1, curr=-1;
    
    for(int i=0; i<S1.size(); i++)
    {
        if(S1[i]!=S2[i])
        {
            ctr++;
            prev=curr;
            curr=i;
        }
        
        if(ctr>2)
          return false;
    }
    
    return ctr==2&&S1[prev]==S2[curr]&&S1[curr]==S2[prev];
}