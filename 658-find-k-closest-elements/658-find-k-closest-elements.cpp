class Solution {
public:
    //TC - nlogk
    /*
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        priority_queue<pair<int, int>> maxh;
        for(int i=0; i<arr.size(); i++)
        {
            maxh.push({abs(arr[i]-x), i});
            if(maxh.size()>k)
                maxh.pop();
        }
        
        vector<int> res;
        while(!maxh.empty())
        {
            res.push_back(arr[maxh.top().second]);
            maxh.pop();
        }
        
        sort(res.begin(), res.end());
        return res;
        
    }  */
    
    //TC - logn
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        int lo=0, hi=arr.size()-k;
        while(lo<hi) 
        {
            int mid=(lo+hi)/2;
            if(x-arr[mid]>arr[mid + k]-x)
                lo=mid+1;
            else
                hi=mid;
        }
        return vector<int>(arr.begin()+lo, arr.begin()+lo+k);
    }
};