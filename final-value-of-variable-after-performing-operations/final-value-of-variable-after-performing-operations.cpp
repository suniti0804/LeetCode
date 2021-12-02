class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int val=0;
        for(int i=0; i<operations.size(); i++)
        {
            string str=operations[i];
            if(str[0]=='-'||str[2]=='-')
                val--;
            else
                val++;
        }
        return val;
        
    }
};