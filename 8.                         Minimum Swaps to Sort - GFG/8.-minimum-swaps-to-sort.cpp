// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int ctr=0;
	    vector<int> temp(nums.begin(), nums.end());
	    unordered_map<int, int> mp;
	    
	    for(int i=0; i<nums.size(); i++)
	      mp[nums[i]]=i;
	    
	    sort(temp.begin(), temp.end());
	    
	    for(int i=0; i<nums.size(); i++)
	    {
	        if(temp[i]!=nums[i])
	        {
	            ctr++;
	            swap(nums[i], nums[mp[temp[i]]]);
	            swap(mp[nums[i]], mp[nums[mp[temp[i]]]]);
	           
	        }
	    }
	       
	    return ctr;    
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
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends