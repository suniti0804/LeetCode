// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k)
    {
        /*int ctr=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<k)
            {
                ctr++;
                int prod=a[i];
                int j=i+1;
                while(j<n)
                {
                    prod*=a[j];
                    if(prod<k)
                      ctr++;
                    else
                     break;
                    j++; 
                }
                
            }
        }
        return ctr;  */
        
        if (k == 0) 
           return 0;
        long long ctr = 0;
        long long pro = 1;
        for (int i = 0, j = 0; j < a.size(); j++) 
        {
            pro *= a[j];
            while (i <= j && pro >= k)
                pro /= a[i++];
        
            ctr += j - i + 1;
        }
        return ctr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends