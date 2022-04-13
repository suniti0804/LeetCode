// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> res;
        stack<long long> st;
        //res.push_back(-1);
        
        for(int i=n-1; i>=0; i--)
        {
            if(st.empty())
              res.push_back(-1);
            else if(st.top()>arr[i])
              res.push_back(st.top());
            else
            {
                while(!st.empty()&&st.top()<=arr[i])
                  st.pop();
                if(st.empty())
                  res.push_back(-1);
                else
                  res.push_back(st.top());
            }
            
            st.push(arr[i]);
        }
        
        reverse(res.begin(), res.end());
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
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends