class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        int n=arr.size();
        int res=0;
        
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                int start=i;
                int end=i;
                
                while(start>0&&arr[start]>arr[start-1])
                    start--;
                while(end<n-1&&arr[end]>arr[end+1])
                    end++;
                res=max(res, end-start+1);
            }
        }
        
        return res;
        
    }
};