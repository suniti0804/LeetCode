// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    /*int subsetSum(int arr[], int N, int M)
    {
        vector<vector<int>> t(N+1, vector<int> (M+1));
        
        for(int i=0; i<=N; i++)
          for(int j=0; j<=M; j++)
            {
                if(i==0)
                  t[i][j]=0;
                if(j==0)
                  t[i][j]=1;
            }
            
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=M; j++)
            {
                if(arr[i-1]<=j)
                  t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                else
                  t[i][j]=t[i-1][j];
            }
        }
        
        return t[N][M];
    }  */

    int subsetSum(int arr[], int N, int M)
    {
        bool t[M + 1];
        memset(t, false, sizeof(t));
        t[0] = true;

        for (int i = 0; i < N; i++)
        {
            for (int j = M; j > 0; j--) 
            {
                if (arr[i]<=j) 
                  t[j]=t[j]||t[j - arr[i]];
            }
        }

        return t[M];  
    }

    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0; i<N; i++)
          sum+=arr[i];
          
        if(sum%2!=0)
          return 0;
        
        int M=sum/2;
        
        return subsetSum(arr, N, M);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends