// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int maxOnes(int arr[], int n)
    {
        int orig_one_count = 0;
        int max_diff = 0;
        int curr_max = 0;
    
        for (int i=0; i<n; i++)
        {
            if(arr[i]==1)
               orig_one_count++;
            int val=(arr[i]==0)?1:-1;
            curr_max=max(val,curr_max+val);
            max_diff=max(max_diff,curr_max);
        }
        
        max_diff = max(0, max_diff);
        return orig_one_count + max_diff;
    }
};


// { Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}
  // } Driver Code Ends