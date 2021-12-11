class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        sort(piles.begin(), piles.end());
        int k=piles.size()/3;
        
        int i=0;
        int j=piles.size()-2;
        int res=0;
        
        while(i<k)
        {
            res += piles[j];
            j-=2;
            i++;
        }
        
        return res;
        
    }
};