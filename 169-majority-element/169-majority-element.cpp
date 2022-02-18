class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        int n=arr.size();
        int ctr=1;
        int curr=arr[0];
        
        for(int i=1; i<n; i++)
        {
            if(arr[i]==curr)
                ctr++;
            else
                ctr--;
            if(ctr==0)
            {
                ctr=1;
                curr=arr[i];
            }
        }
        
        int count=0;
        for(int i=0; i<n; i++)
            if(arr[i]==curr)
                count++;
        
        if(count>(n/2))
            return curr;
        return -1;
    }
};