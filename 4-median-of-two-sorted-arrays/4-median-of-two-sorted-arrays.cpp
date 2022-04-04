class Solution {
public:
    //TC - O(n1+n2), naive solution, simply merge
    /*double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1=nums1.size();
        int n2=nums2.size();
        
        int total=n1+n2;
        
        int target=total/2;
        
        int i=0, j=0, k=0;
        int arr[total];
        
        while(i<n1&&j<n2)
        {
            if(nums1[i]<nums2[j])
                arr[k++]=nums1[i++];
            else
                arr[k++]=nums2[j++];
        }
        
        while(i<n1)
            arr[k++]=nums1[i++];
        while(j<n2)
            arr[k++]=nums2[j++];
        
        if(total%2==0)
            return (arr[target]+arr[target-1])/2.;
        return 
            arr[target];    
    }  */
    
    double findMedianSortedArrays(vector<int>& a1, vector<int>& a2) 
    {
        if (a1.size() > a2.size()) 
            swap(a1, a2); // make sure a1 is shorter
        int n1 = a1.size(), n2 = a2.size();
        int total=(n1+n2);
        
        // range of a1 cut location: n1 means no right half for a1
        int lo=0, hi=n1;
        while(lo<=hi) 
        {
            int mid1=(lo+hi)/2; //cut location is counted to right half
            int mid2=(n1+n2)/2-mid1;
            
            int l1=(mid1==0)?INT_MIN:a1[mid1-1];
            int l2=(mid2==0)?INT_MIN:a2[mid2-1];
            int r1=(mid1==n1)?INT_MAX:a1[mid1];
            int r2=(mid2==n2)?INT_MAX:a2[mid2];
            
            if (l1>r2) 
                hi=mid1-1;
            else if(l2>r1) 
                lo=mid1+1;
            else 
            {
                if(total%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.;
                else 
                    return min(r1, r2);
            }
        }
                    
        return -1;
                    
    }
};