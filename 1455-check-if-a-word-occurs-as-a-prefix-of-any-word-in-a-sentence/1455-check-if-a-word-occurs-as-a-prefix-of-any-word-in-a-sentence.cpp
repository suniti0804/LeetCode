class Solution {
public:
    int isPrefixOfWord(string sentence, string word) 
    {
        stringstream str(sentence);
        string temp;
        int i=1;
        
        while(str>>temp)
        {
            if(temp.substr(0, word.size())==word)
                return i;
            i++;
        }
        return -1;
        
    }
};