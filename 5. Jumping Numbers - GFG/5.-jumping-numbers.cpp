// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  
    long long jumpingNums(long long X) 
    {
       long long res=INT_MIN;
       for(int i=0; i<=9; i++)
       {
           queue<long long> q;
           q.push(i);
           
           while(!q.empty())
           {
               long long num=q.front();
               q.pop();
               
               if(num<=X)
               {
                   res=max(res, num);
                   long long last=num%10;
                   if(last==0)
                     q.push((num*10)+1);  //last+1
                   else if(last==9)
                     q.push((num*10)+8);  //last-1
                   else
                    {
                        q.push((num*10)+last-1);
                        q.push((num*10)+last+1);
                    }
               }
           }
           
       }
       
       return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}  // } Driver Code Ends