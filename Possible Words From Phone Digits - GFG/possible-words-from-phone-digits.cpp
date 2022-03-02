// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(int index, string s, string phone[], int arr[], int n, vector<string> &ans)
    {
        if(index == n)
        {
            ans.push_back(s);
            return;
        }
        
        string word=phone[arr[index]];
        for(int i=0;i<word.length();i++)
            solve(index+1, s+word[i], phone, arr, n, ans);
        
    }

    vector<string> possibleWords(int arr[], int n)
    {
        string s[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        solve(0,"", s, arr, n, ans);
        return ans;
    }
    
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends