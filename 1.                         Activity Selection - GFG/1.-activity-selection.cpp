// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int, int>> activity;
        
        for(int i=0; i<n; i++)
          activity.push_back({end[i], start[i]});
          
        sort(activity.begin(), activity.end());
        int ctr=1; //first activity always gets selected
        
        int last=activity[0].first;
        
        for(int i=1; i<n; i++)
        {
            if(activity[i].second>last)
            {
                ctr++;
                last=activity[i].first;
            }
        }
        
        return ctr;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends