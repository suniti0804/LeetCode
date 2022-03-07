class Solution {
public:
    int numOfSubarrays(vector<int>& arr) 
    {
        long long odd=0;
        int preSum=0;
        
        for(auto i:arr)
        {
            preSum+=i;
            odd+=(preSum%2);
        }
        
        return (int)(odd*(arr.size()+1-odd)%1000000007);
        
    }
};