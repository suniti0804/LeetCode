// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int distinctIds(int arr[], int n, int m)
    {
        if(m>n)
          return 0;
        
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
          mp[arr[i]]++;
          
        vector<int> res;
        for(auto it:mp)
           res.push_back(it.second);
        
        sort(res.begin(), res.end());
        
        int ctr=0;
        int i=0;
        
        while(m>0)
        {
            m-=res[i];
            if(m>=0)
              ctr++;
            i++;  
        }
        return mp.size()-ctr;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
          cin>>arr[i];
        }
    
    	int m ;
    	cin >> m;
        Solution ob;
    	cout << ob.distinctIds(arr, n, m) << endl;
    }
	return 0;
}  // } Driver Code Ends