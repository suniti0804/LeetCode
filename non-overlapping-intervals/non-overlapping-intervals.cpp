class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b) 
    {
	   return a[1] < b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();
        int res = -1;      
		if(n == 0) 
            return 0;       
		sort(intervals.begin(), intervals.end(), comp);
		vector<int> prev = intervals[0];

		for(auto i: intervals) 
        {
			if(prev[1] > i[0])
				res++;               
			else
                prev = i;           
		}
		return res;     
    }
};