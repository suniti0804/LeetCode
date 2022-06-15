class Solution {
public:
    
    //n^4 solution was there when in isValid function lcs is used.
    bool isValid(string a, string b)
    {
        int m=a.size();
        int n=b.size();
        
        if((m+1)!=n)
            return false;
        
        bool flag=false; //to mark missing element
   
        int j=0;
        for(int i=0; i<n; i++)
        {
            if(b[i]==a[j])
                j++;
            else
            {
                if(!flag)
                    flag=true;
                else
                    return false;
            }
        }
        
        return true;
    }
   
    static bool myComp(string& a, string& b)
    {
        return a.size()<b.size();
    }
    
    int longestStrChain(vector<string>& words) 
    {
        int n=words.size();
        vector<int> t(n, 1);
        int ans=1;
        
        sort(words.begin(), words.end(), myComp);
        
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                int m=words[i].size();
                int n=words[j].size();
                
                if(n+1==m&&isValid(words[j], words[i])&&t[i]<t[j]+1) 
                   t[i]=t[j]+1;
                ans=max(ans, t[i]);
            }
        }
        return ans;
    }  
};