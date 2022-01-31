// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
   bool isValid(int arr[], int n, int k, long long mx)
    {
        int sum = 0, painter = 1;
        for(int i = 0; i < n; i++)
         {
             sum += arr[i];
             if(sum > mx)
              {
                  painter++;
                  sum = arr[i];
              }
              
            if(painter > k)
              return false;
         }
         
        return true; 
    }
  
    long long minTime(int arr[], int n, int k)
    {
           long long sum = 0;
           for(int i = 0; i < n; i++)
             sum += arr[i];
           long long start = *max_element(arr, arr + n), end = sum;
           long long res = -1;
           while(start <= end)
            {
                long long mid = start + (end - start)/2;
                if(isValid(arr, n, k, mid))
                  {
                      res = mid;
                      end = mid - 1;
                  }
                else
                  start = mid + 1;
            }
            
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
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends