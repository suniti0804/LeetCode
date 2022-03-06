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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr=head;
        ListNode* ptr=head->next;
        
        while(ptr)
        {
            if(ptr->val!=0)
                curr->val+=ptr->val;
            else
            {
                if(ptr->next==NULL)
                    curr->next=NULL;
                else
                    curr->next=ptr;
                curr=ptr;
            }
           ptr=ptr->next;
        }
        
        return head;
        
    }
};