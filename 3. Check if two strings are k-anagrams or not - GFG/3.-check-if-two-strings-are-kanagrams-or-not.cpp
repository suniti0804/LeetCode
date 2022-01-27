// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) 
    {
        if(str1.size()!=str2.size())
         return false;
        unordered_map<int, int> mp;
        for(auto s:str1)
          mp[s]++;
          
        int ctr=0;  
        for(auto s:str2)
          mp[s]--;
        
        for(auto i:mp)
          ctr+=abs(i.second);
        
        return (ctr/2)<=k;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends