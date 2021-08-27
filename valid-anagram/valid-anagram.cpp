class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int count[256] ={0};
        for(int i = 0; i < s.size(); i++)
            count[s[i]]++;
        
        for(int i = 0; i < t.size(); i++)
        {
            if(count[t[i]] == 0)
                return false;
            count[t[i]]--;
        }
        
        for(int i = 0; i < 256; i++)
            if(count[i] != 0)
                return false;
        
        return true;
        
        //Space complexity : O(1). Although we do use extra space,
        //the space complexity is O(1) because the table's size stays constant 
        //no matter how large n is.
    }
};