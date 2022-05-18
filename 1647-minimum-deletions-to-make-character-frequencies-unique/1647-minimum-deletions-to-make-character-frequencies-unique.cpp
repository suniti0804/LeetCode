class Solution {
public:
    int minDeletions(string s) 
    {
        int ctr=0;
        vector<int> cnt(26, 0);
        unordered_set<int> st;
        
        for(int i=0; i<s.size(); i++)
            cnt[s[i]-'a']++;
        
        for(int i=0; i<26; i++)
        {
            if(st.find(cnt[i])!=st.end()&&cnt[i]!=0)
            {
                int k=cnt[i];
                while(st.find(k)!=st.end()&&k)
                    k--;
                st.insert(k);
                ctr+=cnt[i]-k;
            }
            else
                st.insert(cnt[i]);
        }
        return ctr;
        
    }
};