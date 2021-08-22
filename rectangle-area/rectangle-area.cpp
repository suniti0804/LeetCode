class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int total = (C - A) * (D - B) + (G - E) * (H - F);
    
        if (C <= E || A >= G || B >= H || D <= F)
            return total;
        else
        {
            vector <int> v1;
            v1.push_back(A);
            v1.push_back(C);
            v1.push_back(E);
            v1.push_back(G);

            vector <int> v2;
            v2.push_back(B);
            v2.push_back(D);
            v2.push_back(F);
            v2.push_back(H);

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());

            total -= (v1[2] - v1[1]) * (v2[2] - v2[1]);
            return total;
        }
    }    
};