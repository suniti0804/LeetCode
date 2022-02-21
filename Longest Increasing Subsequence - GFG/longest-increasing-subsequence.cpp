// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int lis[n];
        for(int i = 0; i < n; i++)
          lis[i] = 1;
    
        //computation in bottom up manner
        for(int i = 1; i < n; i++)
         {
             for(int j = 0; j < i; j++)
              {
                 //store the maximum length till that element
                  if(a[i] > a[j] && lis[i] < lis[j] + 1)
                   lis[i] = lis[j] + 1;
              }
         }
         
        return *max_element(lis, lis + n);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends