class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int cap=0;
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]>='A'&&word[i]<='Z')
            {
                cap++;
                if(cap!=i+1)
                    return false;
            }
            if(word[i]>='a'&&word[i]<='z'&&cap>1)
                return false;
        }
        return true;
        
    }
};