class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) 
    {
        int ctr=0;
        vector<bool> vis(1001, false);
        queue<int> q;
        q.push(start);
        int i=0;
        
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                int curr=q.front();
                q.pop();
                if(curr==goal)
                    return ctr;
                if(curr>1000||curr<0||vis[curr])
                    continue;
                vis[curr]=true;
                
                for(auto i:nums)
                {
                    q.push(curr+i);
                    q.push(curr-i);
                    q.push(curr^i);
                }
            }
            
            ctr++;
        }
        
        return -1;
        
    }
};