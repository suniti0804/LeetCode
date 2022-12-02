//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++)
           freq[nums[i] % k]++;

        for(int i = 0; i < nums.size(); i++)
         {
             int rem = nums[i] % k;
             
             if(rem == 0)
              {
                  if(freq[0] % 2 != 0)
                    return false;
              }
             
             else if(freq[rem] != freq[k - rem])
               return false;
               
         }
      return true;     
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends