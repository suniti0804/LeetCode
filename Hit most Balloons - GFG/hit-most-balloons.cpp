// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int mostBalloons(int N, pair<int, int> arr[]) 
    {
        if(N<=2)
          return N;
        
        int res=2; //two balloons can always be hitted
     
        for(int i=0; i<N; i++)
        {
            double x1=arr[i].first;
            double y1=arr[i].second;
            
            unordered_map<double, int> mp;  
            int ctr=0;
            for(int j=0; j<N; j++)
            {
                double x2=arr[j].first;
                double y2=arr[j].second;
                
                if(x1==x2&&y1==y2)
                  ctr++;
                else
                  mp[double(y2-y1)/double(x2-x1)]++;
            }
            
            for(auto it:mp)
                res=max(res, it.second+ctr);
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}  // } Driver Code Ends