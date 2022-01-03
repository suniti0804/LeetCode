/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int> res;
        stack<pair<int,int>> st;
        int i=0;
        while(head) 
        {
            while (st.size() && head->val > st.top().first) {
                res[st.top().second] = head->val;
                st.pop();
            }
            st.push({head->val, i++});
            res.push_back(0);
            head = head->next;
        }
        return res;
    }
};