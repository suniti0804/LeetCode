class Solution {
public:
    int maxPoints(vector<vector<int>>& arr) 
    {
       int N=arr.size();
       if(N<=2)
          return N;
        
        int res=2; //two balloons can always be hitted
     
        for(int i=0; i<N; i++)
        {
            int x1=arr[i][0];
            int y1=arr[i][1];
            
            unordered_map<double, int> mp;  
            int ctr=0;
            for(int j=0; j<N; j++)
            {
                int x2=arr[j][0];
                int y2=arr[j][1];
                
                if(x1==x2&&y1==y2)
                  ctr++;
                else
                  mp[double(y2-y1)/double(x2-x1)]++;
            }
            
            for(auto it:mp)
                res=max(res, it.second+ctr);
        }
        return res;
    }
};