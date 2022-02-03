#User function Template for python3

def toString(List): 
        return ''.join(List) 
    
def permute(a, l, r, res): 
    if l==r: 
        res.append(toString(a))
        return
    
    for i in range(l,r+1): 
        a[l], a[i] = a[i], a[l] 
        permute(a, l+1, r, res) 
        a[l], a[i] = a[i], a[l] 
        
    return 

class Solution:
    
    def permutation(self,s):
        res=[]
        a=list(s)
        n=len(s)
        permute(a, 0, n-1, res)
        res.sort()
        return res

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    T=int(input())
    while(T>0):
        s=input()
        ob=Solution()
        ans=ob.permutation(s)
        for i in ans:
            print(i,end=" ")
        print()
        
        T-=1
# } Driver Code Ends