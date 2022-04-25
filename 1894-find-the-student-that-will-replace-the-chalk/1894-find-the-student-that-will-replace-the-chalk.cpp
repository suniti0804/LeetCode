class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) 
    {
        int n=chalk.size();
        long long sum=0;
        for(int i=0; i<n; i++)
            sum+=chalk[i];
        k%=sum;
        
        int i;
        for(i=0; i<n; i++)
        {
            k-=chalk[i];
            if(k<0)
                break;
        }
        
        return i;
    }
};