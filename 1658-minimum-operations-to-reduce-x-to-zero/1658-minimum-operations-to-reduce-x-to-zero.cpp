class Solution {
public:
    
  /*  If it exists an answer, then it means we have a subarray in the middle of original array whose sum is == totalSum - x
If we want to minimize our operations, then we should maximize the length of the middle subarray.
Then the qeustion becomes: Find the Longest Subarray with Sum Equals to TotalSum - X
We could simply use Map + Prefix Sum to get it! */

    
    int minOperations(vector<int>& arr, int x) 
    {
        int n=arr.size();
        int res=INT_MIN;
        int totalSum=0, sum=0, j=0;
        
        for(auto i:arr) totalSum+=i;
        
        int target=totalSum-x;
        
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
            if(sum>target)
            {
                while(sum>target&&j<=i)
                {
                    sum-=arr[j];
                    j++;
                }
            }
            if(sum==target)
                res=max(res, i-j+1);
        }
        
        return res==INT_MIN?-1:n-res;
    }
};