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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode *ptr1=head, *ptr2=head, *ptrk=NULL;
        while (--k)
            ptr1=ptr1->next;
        
        ptrk=ptr1;
        ptr1=ptr1->next;
        
        while(ptr1) 
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
        swap(ptr2->val,ptrk->val);
        return head;
    }
    
};