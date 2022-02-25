// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
        vector<int> left(n), right(n);
        
        stack<int> st;
        
        for(int i=0; i<n; i++)
        {
            while(!st.empty()&&st.top()>=A[i])
              st.pop();
            if(!st.empty())
              left[i]=st.top();
            else
              left[i]=0;
            st.push(A[i]);  
        }
        
        reverse(A, A+n);
        while(!st.empty())
          st.pop();
        for(int i=0; i<n; i++)
        {
            while(!st.empty()&&st.top()>=A[i])
              st.pop();
            if(!st.empty())
              right[i]=st.top();
            else
              right[i]=0;
            st.push(A[i]);  
        }
        
        int res=INT_MIN;
        
        for(int i=0; i<n; i++)
          res=max(res, abs(left[i]-right[n-1-i]));
          
        return res;  
        
    }
};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}


  // } Driver Code Ends