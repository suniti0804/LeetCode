class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
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
        
        
        
        
    }
};