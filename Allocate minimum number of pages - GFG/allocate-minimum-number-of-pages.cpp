// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool isValid(int mid, int A[], int N, int M)
    {
        int ctr=1;
        int curr=0;
        
        for(int i=0; i<N; i++)
        {
            if(curr+A[i]<=mid)
              curr+=A[i];
            else
            {
                curr=A[i];
                ctr++;
            }
            
            if(ctr>M)
              return false;
        }
        
        return true;  
    }
    
    int findPages(int A[], int N, int M) 
    {
        int res;
        int s=*max_element(A, A+N), e=0;
        
        for(int i=0; i<N; i++)
          e+=A[i];
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isValid(mid, A, N, M))
            {
                res=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends