class Solution {
public:
    string decodeString(string s) 
    {
       int currVal=0;
       string currString="";
       int prevNo;
       string prevString;
       stack<string>st;
       stack<int>num;
       
       for(int i=0;i<s.size();i++)
       {
           if(isdigit(s[i])) 
              currVal = currVal*10 + (s[i]-'0');
           if(isalpha(s[i])) 
              currString+=s[i];
              
           if(s[i] == '[')
           {
               st.push(currString);
               num.push(currVal);
               currVal=0;
               currString="";
           }
           
           if(s[i] == ']')
           {
               prevNo = num.top();
               num.pop();
               prevString = st.top();
               st.pop();
               
               while(prevNo--)
                  prevString += currString;
                  
               currString = prevString;
           }
       }
       
       return currString;
       
    }
};