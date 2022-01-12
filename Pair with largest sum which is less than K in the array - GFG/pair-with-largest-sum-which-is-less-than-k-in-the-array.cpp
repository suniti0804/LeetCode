// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

// arr[]: Input array
// n: Number of elements in the array
// k: Find a pair with sum less than k
pair<int, int> Max_Sum(int arr[], int n, int k) 
{
    pair<int, int> res;
    sort(arr, arr+n);
    int l = 0, r = n - 1, ans = 0;

    // While l is less than r
    while (l < r) 
    {
        if (arr[l] + arr[r] < k) 
        {
            if(arr[l]+arr[r]>ans)
            {
                res={arr[l], arr[r]};
                ans=arr[l]+arr[r];
            }
            l++;
        }
        else 
            r--;
    }

    return res;
}


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n + 5];
        for (int i = 0; i < n; i++) cin >> arr[i];
        pair<int, int> p = Max_Sum(arr, n, k);
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
  // } Driver Code Ends