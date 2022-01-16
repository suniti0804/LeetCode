class Solution {
public:
    int maxDistToClosest(vector<int>& seats) 
    {
        int res=0;
        int n=seats.size();
        
        int i=0;
        while(seats[i]==0&&i<n)
            i++;
        
        int begin=i;
        int index=i;
        if(i==0)
            i++;
        
        while(i<n)
        {
            if(seats[i]==1)
            {
                res=max(res, i-index);
                index=i;
            }
            i++;
        }
        
        int last=n-index-1;
        
        //res=res%2==0?res/2:(res/2)+1;
        return max(begin, max(res/2, last));
        
    }
};