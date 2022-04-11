class Solution {
public:
    /*
      For [1,3,4,6] the probablity of choosing index 0 is 1/14, 1 is 3/14, 2 is           4/14 and 3 is 6/14. Using Prefix sum I have converted the weight vector into       a vector v:- [1,1+3, 1+3+4, 1+3+4+6].
      In case of random numbers from [0,14), if the number is 0 then I return index       0, if number lies between [1-4) I return index 1, if number lies between [4-       8) I return index 2 and if it lies in [8,14) I return index 3.
      So, basically I'm returning the index of the upperbound of the random               generated number from vector v.  
    */
    
    vector<int> arr;
    
    Solution(vector<int>& w) 
    {
        arr.push_back(w[0]);
        for(int i=1; i<w.size(); i++)
            arr.push_back(arr[i-1]+w[i]);
    }
    
    int pickIndex() 
    {
        //rand() generate a huge number and when you use mod x, 
        //it change it to 0 to x-1.
        int n=rand()%arr[arr.size()-1];
        auto it=upper_bound(arr.begin(), arr.end(), n)-arr.begin();
        return it;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */