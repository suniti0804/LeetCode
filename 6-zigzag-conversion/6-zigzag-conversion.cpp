class Solution {
public:
    string convert(string s, int numRows) 
    {
        int n=s.size();
        if(numRows==1)
            return s;
        
        int l=min(n, numRows);
        
        vector<string> rows(l);
        int curr=0;
        bool flag=false;
        
        for(int i=0; i<s.size(); i++)
        {
            rows[curr]+=s[i];
            if(curr==0||curr==numRows-1)
                flag=!flag;
            curr+=flag?1:-1;
        }
        
        string ans="";
        for(auto str:rows)
            ans+=str;
        
        return ans;
        
    }
};