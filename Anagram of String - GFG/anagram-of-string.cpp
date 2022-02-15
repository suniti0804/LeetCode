// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    unordered_map<int, int> mp;
    
    for(auto c:str1)
      mp[c]++;
      
    for(auto c:str2)
      mp[c]--;
      
    int res=0;
    for(auto i:mp)
      res+=abs(i.second);
      
    return res;  
}