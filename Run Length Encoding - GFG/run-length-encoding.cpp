// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string res="";
    int ctr=1;
    
    int i=1;
    while(i<src.size())
    {
        if(src[i]==src[i-1])
          ctr++;
        else
        {
            res+=src[i-1]+to_string(ctr);
            ctr=1;
        }
        i++;
    }
    
    res+=src[i-1]+to_string(ctr);
    return res;
}     
 
