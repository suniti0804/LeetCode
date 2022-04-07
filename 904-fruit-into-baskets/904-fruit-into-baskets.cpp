class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int n=fruits.size();
        int fruit1=-1, fruit2=-1;
        int i=0, j=0, res=INT_MIN;
        
        for(; j<n; j++)
        {
            if(fruit1==-1)
            {
                fruit1=fruits[j];
                continue;
            }
            
            if(fruits[j]==fruit1)
                continue;
            
            if(fruit2==-1)
            {
                fruit2=fruits[j];
                continue;
            }
            if(fruits[j]==fruit2)
                continue;
            
            res=max(res, j-i);
            i=j-1;
            while(i>=0&&fruits[i]==fruits[i-1])
                i--;
            
            fruit1=fruits[i];
            fruit2=fruits[j];
        }
        
        res=max(res, j-i);
        return res;
    }
};