// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    void solve(int s, int N, int num, int len, vector<int>& res)
    {
        if(len==N)
        {
            res.push_back(num);
            return;
        }
        
        for(int i=s; i<=9; i++)
        {
            num=num*10+i;
            len++;
            solve(i+1, N, num, len, res);
            len--;
            num=(num-i)/10;
        }
    }

    vector<int> increasingNumbers(int N)
    {
        vector<int> res;
        if(N==1)
          return {0,1,2,3,4,5,6,7,8,9};
        solve(1, N, 0, 0, res);
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
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends