// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int countKdivPairs(int arr[], int n, int k)
    {
        int ctr=0;
        vector<int> freq(k, 0);
        for(int i=0; i<n; i++)
          freq[arr[i]%k]++;
        
        ctr+=freq[0]*(freq[0]-1)/2;
        for(int i=1; i<=k/2; i++)
          if(i!=(k-i))
            ctr+=freq[i]*freq[k-i];
        if(k%2==0)
           ctr+=freq[k/2]*(freq[k/2]-1)/2;
        return ctr;   
          
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends