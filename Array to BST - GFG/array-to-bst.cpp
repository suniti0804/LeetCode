// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    void arrayToBST(vector<int> &arr, vector<int> &res, int low, int high, int &index)
    {
        if(low>high)
           return;
           
        int mid=low+(high-low)/2;
        res[index++]=arr[mid];
        arrayToBST(arr, res, low, mid-1, index);
        arrayToBST(arr, res, mid+1, high, index);
        
    }

    vector<int> sortedArrayToBST(vector<int>& arr) 
    {
        vector<int> res(arr.size(), 0);
        int index = 0;
        
        arrayToBST(arr, res, 0, arr.size()-1, index);
        
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends