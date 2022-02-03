#User function Template for python3

def toString(List): 
        return ''.join(List) 
    
def solve(s, l, r, res): 
    if l==r: 
        res.append(toString(s))
        return
    
    for i in range(l,r+1): 
        s[l], s[i] = s[i], s[l] 
        solve(s, l+1, r, res) 
        s[l], s[i] = s[i], s[l] 
        
    return 



class Solution:
    def permutation(self,string):
        res=[]
        s=list(string)
        n=len(s)
        solve(s, 0, n-1, res)
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