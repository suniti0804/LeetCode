class Solution {
public:
    
    int find(int x, vector<int>& parent) 
    {
        return parent[x]==x?x:find(parent[x], parent);
    }
    
    int findCircleNum(vector<vector<int>>& M) 
    {
        if (M.empty()) 
            return 0;
        int n=M.size();

        vector<int> parent(n, 0);
        for (int i=0; i<n; i++) 
            parent[i]=i;

        int ctr=n;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++) 
            { 
                if (M[i][j]) 
                {
                    int lead1=find(i, parent);
                    int lead2=find(j, parent);
                    if (lead1 != lead2) 
                    {    
                        parent[lead1]=lead2;
                        ctr--;
                    }
                }
            }
        }
        return ctr;
        
    }
};