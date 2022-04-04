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
    //1.keep on merging two lists 
    //2.use of priority queue
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<int, vector<int>, greater<int>> minh;
        
        for(int i=0; i<lists.size(); i++)
        {
            ListNode* curr=lists[i];
            while(curr)
            {
                minh.push(curr->val);
                curr=curr->next;
            }
        }
        
        ListNode* res=new ListNode(-1);
        ListNode* curr=res;
        while(!minh.empty())
        {
            curr->next=new ListNode(minh.top());
            curr=curr->next;
            minh.pop();
        }
        
        return res->next;
        
    }
};