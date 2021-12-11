class Solution {
public:
    int wateringPlants(vector<int>& plants, int cap) {
        int res=0;
        int capacity = cap;
        for(int i=0; i<plants.size(); i++)
        {
            if(plants[i]<=capacity)
            {
                capacity -= plants[i];
                res++;
            }    
            else
            {
                res += (2*i+1);
                capacity=cap-plants[i];
            }
        }
        
        return res;
        
    }
};