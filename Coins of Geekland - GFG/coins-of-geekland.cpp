// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &m,int n,int k)
    {
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++)
            m[i][j]+=m[i][j-1];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++)
            m[i][j]+=m[i-1][j];
        }
        int mx=m[k-1][k-1];
        for(int i=k-1;i<n;i++){
            for(int j=k-1;j<n;j++){
                if(i==k-1&&j==k-1)
                continue;
                int res=m[i][j];
                if(i>k-1)
                res-=m[i-k][j];
                if(j>k-1)
                res-=m[i][j-k];
                if(i>k-1 && j>k-1)
                res+=m[i-k][j-k];
                mx=max(mx,res);
            }
        }
        return mx;
    }  
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends