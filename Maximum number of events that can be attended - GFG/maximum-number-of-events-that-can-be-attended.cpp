// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxEvents(int start[], int end[], int n) 
    {
        vector<pair<int, int>> event;
        
        for(int i=0; i<n; i++)
          event.push_back({start[i], end[i]});
        
        sort(event.begin(), event.end());
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        int i=0, cnt=0, d=0;
        
        while(!pq.empty()||i<n)
        {
            if(pq.empty())
               d=event[i].first;
            
            while(i<n&&event[i].first==d)
            {
                pq.push(event[i].second);
                i++;
            }
            
            pq.pop();
            
            cnt++;
            d++;
            
            while(!pq.empty()&&pq.top()<d)
              pq.pop();
        }
        
        return cnt;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];

        Solution ob;
        cout << ob.maxEvents(start,end,N) << endl;
    }
    return 0;
}  // } Driver Code Ends