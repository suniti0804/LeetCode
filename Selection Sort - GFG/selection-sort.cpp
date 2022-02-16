// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        int min_idx = i;
        for(int j = i + 1; j < n; j++)
         if(arr[j] < arr[min_idx])
           min_idx = j;
           
        swap(&arr[min_idx], &arr[i]); 
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i = 0; i < n; i++)
         select(arr, i, n);
    }
};

// { Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends