// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            sort(arr, arr+n);
            int res=INT_MAX;
            int i=0, j=n-1;
            int a, b;
            
            while(i<j)
            {
                int diff=arr[i]+arr[j];
                if(diff==0)
                  return 0;
                if(abs(diff)<res)
                {
                    a=i;
                    b=j;
                    res=abs(diff);
                    
                }
                else if(abs(diff)==res)
                {
                    if(arr[a]+arr[b]<diff)
                    {
                        a=i;
                        b=j;
                    }
                }
                
                if(diff<0)
                  i++;
                else
                  j--;
            }
            return arr[a]+arr[b];
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends