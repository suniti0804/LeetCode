// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int maxLength(string S)
    {
        int n=S.size();
        vector<int> lis(n,1);
        
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(S[i]>S[j]&&lis[i]<lis[j]+1)
                  lis[i]=lis[j]+1;
            }
        }
        
        return *max_element(lis.begin(), lis.end());
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends