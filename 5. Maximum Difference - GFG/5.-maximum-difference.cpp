// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
        vector<int> left(n,0), right(n,0);
        left[0]=0;
        right[n-1]=0;
        
        for(int i=1; i<n; i++)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(A[j]<A[i])
                {
                    left[i]=A[j];
                    break;
                }
            }
            //cout<<left[i]<<" ";
        }
        
        //cout<<"\n";
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=i+1; j<n; j++)
            {
                if(A[j]<A[i])
                {
                    right[i]=A[j];
                    break;
                }
            }
            //cout<<right[i]<<" ";
        }
        
        //cout<<"\n";
        
        int res=0;
        for(int i=0; i<n; i++)
          res=max(res, abs(left[i]-right[i]));
          
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