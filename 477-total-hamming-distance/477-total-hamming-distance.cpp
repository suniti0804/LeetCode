class Solution {
public:

    
    int totalHammingDistance(vector<int>& A) 
    {
        int N=A.size();
        int res=0;
        
        for(int i=0; i<32; i++)
        {
            int ctr=0;
            for(int k=0; k<N; k++)
              if((A[k]&(1<<i)))
                ctr++;
            
            res+=ctr*(N-ctr);  
        }
        
        return res;
    }
};