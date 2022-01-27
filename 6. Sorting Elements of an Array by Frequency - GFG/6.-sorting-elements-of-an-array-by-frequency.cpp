// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    
    bool static comp(pair<int, int>p1, pair<int, int>p2)
    {
        if(p1.second==p2.second)
          return p1.first<p2.first;
          
        return p1.second>p2.second;  
    }
    
    vector<int> sortByFreq(int arr[],int n)
    {
        vector<int> res;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
          mp[arr[i]]++;
          
        vector<pair<int, int>> v;
        for(auto i:mp)
          v.push_back({i.first, i.second});
          
        sort(v.begin(),v.end(), comp);
        
        for(auto i:v)
        {
            while(i.second--)
              res.push_back(i.first);
        }
        
        return res;  
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends