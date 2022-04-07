class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) 
    {
        unordered_map<string, int> mp;
        for(auto word:dictionary)
            mp[word]++;
        
        stringstream ss(sentence);
        string word;
        
        string res="";
        while(ss>>word)
        {
            int i=1;
            for(; i<=word.size(); i++)
            {
                if(mp.find(word.substr(0,i))!=mp.end())
                {
                    res+=" "+word.substr(0,i);
                    break;
                }
                
            }
            
            if(i>word.size())
                res+=" "+word;   
        }
        
        return res.substr(1);
        
    }
};