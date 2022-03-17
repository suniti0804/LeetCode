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
        for(int i=0; i<n-1; i++)
        {
            if(str[i]==str[i+1])
            {
                t[i][i+1]=true;
                if(maxLen==1)
                {
                    maxLen=2;
                    start=i;
                }
            }
        }
        for(int k=3; k<=n; k++)
        {
            for(int i=0; i<n-k+1; i++)
            {
                int j=i+k-1;
                if(t[i+1][j-1]&&str[i]==str[j])
                {
                    t[i][j]=true;
                    if(k>maxLen)
                    {
                        maxLen=k;
                        start=i;
                    }
                }
            }
        }
        
        string res="";
        for(int k=start; k<start+maxLen; k++)
           res+=str[k];
           
        return res;   
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