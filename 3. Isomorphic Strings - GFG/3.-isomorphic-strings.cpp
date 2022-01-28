// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size()!=str2.size())
          return false;
        int mp[256];
        memset(mp, -1, sizeof(mp));
        bool seen[256];
        memset(seen, 0, sizeof(seen));
        
        for(int i=0; i<str1.size(); i++)
        {
            if(mp[str1[i]]==-1)
            {
                if(seen[str2[i]])
                  return false;
                seen[str2[i]]=true;
                mp[str1[i]]=str2[i];
            }
            
            else
            {
                if(mp[str1[i]]!=-1&&mp[str1[i]]!=str2[i])
                  return false;
            }
        }
        
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends