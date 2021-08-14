class Solution {
public:
    //this code gives tle
    /*int longestConsecutive(vector<int>& arr) 
    {
        int N = arr.size();
        if(N == 0)
            return 0;
        unordered_map<int, int> freq;
        for(int i = 0; i < N; i++)
           freq[arr[i]]++;
        
        int len = 0, res = INT_MIN; 
        int max_ele = *max_element(arr.begin(), arr.end());
        int min_ele = *min_element(arr.begin(), arr.end());
        
        for(int i = min_ele; i <= max_ele; i++)
         {
             if(freq[i] > 0 && (freq[i + 1] > 0 || freq[i - 1] > 0))
               len++;
             else
               len = 0;
             res = max(res, len);  
         }
         
        if(res > 0)
           return res;
        return 1; 
    }   */
    
    
    //this code is not a tle and is of O(n) time complexity.
    //it is because we are only iterating if the number less than the
    //current number is not found. That means there is single iteration
    //only for every new least number.
    //explanation - striver sde sheet
    int longestConsecutive(vector<int>& arr) 
    {
        int N = arr.size();
        int len = 0, res = INT_MIN;
        
        if(N == 0)
            return 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < N; i++)
           mp[arr[i]]++;
        
        for(auto i : arr)
        {
            if(mp.find(i - 1) == mp.end())
            {
                int k = i;
                int len = 1;
                while(mp.find(k + 1) != mp.end())
                {
                    k++;
                    len++;
                }
                
                res = max(res, len);
            }
        
        }
        return res > 0 ? res : 1;
        
    }    
};