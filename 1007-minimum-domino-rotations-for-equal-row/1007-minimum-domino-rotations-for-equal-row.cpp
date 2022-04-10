class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) 
    {
        int ele1=tops[0], ele2=bottoms[0];
        int res=0;
        int n=tops.size();
        int ctr1=0, ctr2=0;
        
        for(int i=0; i<n; i++)
        {
            if(tops[i]==ele1||bottoms[i]==ele1)
                ctr1++;
            if(tops[i]==ele2||bottoms[i]==ele2)
                ctr2++;
        }
        
        if(ctr1!=n&&ctr2!=n)
            return -1;
        
        if(ctr1>ctr2)
            return n-max(count(tops.begin(), tops.end(), ele1), 
                        count(bottoms.begin(), bottoms.end(), ele1));
        
        return n-max(count(tops.begin(), tops.end(), ele2), 
                        count(bottoms.begin(), bottoms.end(), ele2));
        
    }
};