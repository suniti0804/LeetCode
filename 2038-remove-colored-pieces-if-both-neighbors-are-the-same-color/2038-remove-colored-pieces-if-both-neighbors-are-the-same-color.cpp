class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int i=1;
        int a=0, b=0;
        while(i<colors.size())
        {
            if(colors[i-1]==colors[i]&&colors[i]==colors[i+1])
            {
                if(colors[i]=='A')
                    a++;
                else
                    b++;
            }
            i++;
        }
        
        return a>b;
    }
};