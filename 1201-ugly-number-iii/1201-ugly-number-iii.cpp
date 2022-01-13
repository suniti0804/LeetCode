class Solution {
public:
    
    //count of N elements in the set AUBUC
    //F(N) = a + b + c - a ∩ c - a ∩ b - b ∩ c + a ∩ b ∩ c
    long long lcm(long long a, long long b) 
    {
        return a*b / __gcd(a, b);
    }
    
    int nthUglyNumber(int N, int A, int B, int C) 
    {
        long long lo = 1, hi = 2000000000, mid, ans;
        
        while(lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            long long ctr = 0;
            ctr += mid/A;
            ctr += mid/B;
            ctr += mid/C;
            ctr -= mid / lcm(A, B);
            ctr -= mid / lcm(B, C);
            ctr -= mid / lcm(C, A);
            ctr += mid / lcm(A, lcm(B, C));
            
            if(ctr >= N)
            {
                ans = mid;
                hi = mid-1;
            }
            else
                lo = mid+1;
        }
        return ans;
    }
};