class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int n=colors.size();
        if(n<=2)
            return false;
        
        int a=0, b=0;
        int i=1;
        while(i<n)
        {
            if(colors[i]==colors[i-1]&&colors[i]==colors[i+1])
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