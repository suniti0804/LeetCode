// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    vector<int> seive(){
        int n = 1000000;
        vector<int>isPrime(n+5,1);
        isPrime[0] = isPrime[1] = 0;
        for(int i=2;i*i<=n;i++){
            if(!isPrime[i])
                continue;
            for(int j=2*i;j<=n;j+=i){
                isPrime[j] = 0;
            }
        }
        for(int i=1;i<=n;i++){
            isPrime[i] += isPrime[i-1];
        }
        return isPrime;
    }
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        //long long mx = *max_element(query.begin(),query.end());
        vector<int>pre = seive();
        vector<int>ans;
        for(auto x:query){
            ans.push_back(pre[(int)sqrt(x)]);
        }
        return ans;
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}  // } Driver Code Ends