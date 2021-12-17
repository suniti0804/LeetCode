class Solution {
public:
    string getHint(string secret, string guess) 
    {
        unordered_map<int, int> mp;
        int bulls=0;
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
                mp[secret[i]]--;
            }
            
            mp[secret[i]]++;
        }
        
        int cows=0;
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i]!=guess[i]&&mp[guess[i]]>0)
            {
                cows++;
                mp[guess[i]]--;
            }    
        }
        
        return to_string(bulls)+"A"+to_string(cows)+"B";
        
        
        
    }
};