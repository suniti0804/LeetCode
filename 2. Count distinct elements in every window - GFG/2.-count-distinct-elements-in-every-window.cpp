// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        vector<int> res;
        unordered_map<int, int> mp;
        
        for(int i=0; i<k; i++)
          mp[a[i]]++;
        
        int ctr=mp.size();
        res.push_back(ctr);
          
        int j=0;
        int i=k;
        while(i<n)
        {
            mp[a[j]]--;
            if(mp[a[i]]==0)
              ctr++;
            if(mp[a[j]]==0)
              ctr--;
            mp[a[i]]++;  
            res.push_back(ctr);
            i++;
            j++;
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends