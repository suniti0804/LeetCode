class Solution {
public:
    string reverseWords(string str) 
    {
        int i=0, n=str.size()-1;
        while(str[i]==' ')
            i++;
        cout<<i<<" ";
        while(str[n]==' ')
            n--;
        cout<<n<<" ";
        
        string temp="";
        string res="";
        for(int k=n; k>=i; k--)
        {
            if(str[k]!=' ')
                temp+=str[k];
            else if(str[k]==' '&&str[k-1]==' ')
                continue;
            else
            {
                reverse(temp.begin(), temp.end());
                res+=temp+' ';
                temp="";
            }
            cout<<temp<<" ";
        }
        
        reverse(temp.begin(), temp.end());
        res+=temp;
        return res;
        
    }
};