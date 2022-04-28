// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &s1,vector<int> &s2,vector<int> &s3)
    {
        int sum1=0, sum2=0, sum3=0;
        
        for(int i=0; i<s1.size(); i++)
           sum1+=s1[i];
        for(int i=0; i<s2.size(); i++)
           sum2+=s2[i];
        for(int i=0; i<s3.size(); i++)
           sum3+=s3[i];
           
        int i=0, j=0, k=0;
        
        while(1)
        {
            if(i==s1.size()||j==s2.size()||k==s3.size())
               return 0;
            if(sum1==sum2&&sum2==sum3)
               return sum1;
            
            if(sum1>=sum2&&sum1>=sum3)
              sum1-=s1[i++];
            else if(sum2>=sum1&&sum2>=sum3)
              sum2-=s2[j++];
            else if(sum3>=sum1&&sum3>=sum2)
              sum3-=s3[k++];
        }
        
        return 0;
        
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}  // } Driver Code Ends