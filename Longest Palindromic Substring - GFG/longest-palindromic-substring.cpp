// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string str)
    {
        int n=str.size();
        vector<vector<bool>> t(n, vector<bool>(n, 0));
        
        int start=0, maxLen=1;
        
        for(int i=0; i<n; i++)
           t[i][i]=true;
           
        for(int gap=0; gap<n; gap++)
        {
            for(int i=0, j=gap; j<n; i++, j++)
            {
                if(gap==0)
                  t[i][j]==1;
                else if(gap==1)
                  t[i][j]=(str[i]==str[j]);
                else
                {
                    if(str[i]==str[j]&&t[i+1][j-1])
                        t[i][j]=1;
                }
                
                if(t[i][j]&&maxLen<gap+1)
                {
                    maxLen=gap+1;
                    start=i;
                }
            }
        }
        
        return str.substr(start, maxLen);
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends