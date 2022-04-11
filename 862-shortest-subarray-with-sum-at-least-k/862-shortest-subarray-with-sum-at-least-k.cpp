class Solution {
public:
    
    int shortestSubarray(vector<int>& nums, int k)
    {
        int n=nums.size();
        vector<long long> pre(n);
        pre[0]=nums[0];
        
        for(int i=1;i<n;i++) 
            pre[i]=pre[i-1]+nums[i];

        deque<pair<long long int,int>>dq;
        dq.push_back({0,-1}); 
        // This is because in the starting, the deque is empty so if we 
        //didn't include this may miss out on things when the nums[0]       itself is >=k

        int res=INT_MAX; 
        for(int i=0;i<n;i++)
        {
            long long int val=pre[i];
            while(!dq.empty()&&dq[dq.size()-1].first>=val)
                dq.pop_back();
            
            dq.push_back({pre[i],i});
            
            while(!dq.empty()&&val-dq[0].first>=k)
            {
                res=min(res, i-dq[0].second);
                dq.pop_front();
            }
        }
        
        if(res==INT_MAX) 
            return -1;
        return res;
    }
    
    /*
    int shortestSubarray(vector<int>& nums, int k) 
    {
        int n=nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        long long sum=0;
        long long ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum>=k)
                ans=min(ans, (long long)i+1);
            
            while(!pq.empty()&&sum-pq.top().first>=k)
            {
                auto p=pq.top();
                pq.pop();
                ans=min(ans, (long long)i-p.second);
            }
            
            pq.push({sum, i});
        }
        
        return ans==INT_MAX?-1:ans;
    }
    
    */
};