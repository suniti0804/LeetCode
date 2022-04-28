class Solution {
public:
    
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> res;
        int m=s.size(), n=p.size();
        if(m<n)
            return {};
        vector<int> freq_s(26,0), freq_p(26,0);  
        //when comparing two maps, use vectors and not hashmaps
        
        for(int i=0; i<n; i++)
        {
            freq_s[s[i]-'a']++;
            freq_p[p[i]-'a']++;
        }
        
        if(freq_p==freq_s)
            res.push_back(0);
        
        for(int i=n; i<m; i++)
        {
            freq_s[s[i-n]-'a']--;
            freq_s[s[i]-'a']++;
            
            if(freq_s==freq_p)
                res.push_back(i-n+1);
        }
        
        return res;
    }
};