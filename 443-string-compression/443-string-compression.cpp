class Solution {
public:
    int compress(vector<char>& chars) 
    {
        if(chars.size()<=1)
            return chars.size();
        int ctr=1;
        int start=0;
        int i;
        
        for(i=1; i<chars.size(); i++)
        {
            if(chars[i]!=chars[i-1]||i==chars.size())
            {
                chars[start++]=chars[i-1];
                if(ctr>=2)
                {
                    for(auto count:to_string(ctr))
                        chars[start++]=count;
                }
                ctr=1;
            }
            else
                ctr++;
            
        }
        
        chars[start++]=chars[i-1];
        if(ctr>=2)
        {
            for(auto count:to_string(ctr))
                chars[start++]=count;
        }
        
        return start;
        
    }
};