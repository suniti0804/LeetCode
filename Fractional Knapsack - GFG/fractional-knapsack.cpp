// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    bool static myComp(Item a, Item b)
    {  
        //item is sorted on the basis of ratio
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double value = 0;
        int curr_weight = 0;
        sort(arr, arr + n, myComp);
        for(int i = 0; i < n; i++)
          {
              if(curr_weight + arr[i].weight <= W)
                {
                    value += arr[i].value;
                    curr_weight += arr[i].weight;
                }
               else
                 {
                     int remain = W - curr_weight;
                     value += arr[i].value * double(remain)/double(arr[i].weight);
                     break; 
                 }
          }
        return value;  
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends