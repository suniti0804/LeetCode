class Solution {
public:
    
    /*https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/discuss/768582/Simple-math.-No-DP*/
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