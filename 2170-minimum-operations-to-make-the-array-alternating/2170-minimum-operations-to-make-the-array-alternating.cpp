class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int n=nums.size();
        int even_f=0, odd_f=0, even_s=0, odd_s=0;
        int freq_even_f=0, freq_even_s=0, freq_odd_f=0, freq_odd_s=0;
        
        unordered_map<int, int> even, odd;
        int maxi=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(i&1)
                odd[nums[i]]++;
            else
                even[nums[i]]++;
            maxi=max(maxi, nums[i]);
        }
        
        for(int i=1; i<=maxi; i++)
        {
            if(odd[i]>freq_odd_f)
            {
                odd_s=odd_f;
                freq_odd_s=freq_odd_f;
                
                freq_odd_f=odd[i];
                odd_f=i;
            }
            else if(odd[i]>freq_odd_s)
            {
                freq_odd_s=odd[i];
                odd_s=i;
            }
            
             
            if(even[i]>freq_even_f)
            {
                even_s=even_f;
                freq_even_s=freq_even_f;
                
                freq_even_f=even[i];
                even_f=i;
            }
            
            else if(even[i]>freq_even_s)
            {
                freq_even_s=even[i];
                even_s=i;
            }
            
        }
        
        if(even_f!=odd_f)
            return n-freq_even_f-freq_odd_f;
        
        return min(n-freq_even_f-freq_odd_s, n-freq_even_s-freq_odd_f);
        
    }
};