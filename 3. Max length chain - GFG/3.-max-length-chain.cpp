// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
    vector<pair<int, int>> chain;
    
    for(int i=0; i<n; i++)
      chain.push_back({p[i].second, p[i].first});
      
    sort(chain.begin(), chain.end());
    
    int ctr=1;
    int last=chain[0].first;
    
    for(int i=1; i<n; i++)
    {
        if(chain[i].second>last)
        {
            ctr++;
            last=chain[i].first;
        }
    }
    
    return ctr;
    
}