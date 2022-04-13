// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    {
        vector<int> res;
        res.push_back(-1);
        stack<int> st;
        st.push(arr[n-1]);
        
        for(int i=n-1; i>=0; i--)
        {
            if(st.empty())
               res.push_back(-1);
            else if(st.top()<arr[i])
               res.push_back(st.top());
            else
            {
                while(!st.empty()&&arr[i]<=st.top())
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends