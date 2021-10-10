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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
       /* if(head == NULL)
             return head;
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            temp = temp -> next;
            len++;
        }
        if(len == 1)
            return NULL;
        if(len < n)
            return head;
        if(len == n)
        {
            head = head -> next;
            return head;
        }
        temp = head;
        for(int i = 1; i < (len - n); i++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        return head;   */
       
        ListNode* temp = new ListNode(-1);
        temp->next=head;
        
        ListNode*slow=temp;
        ListNode*fast=temp;
        
        while(n--)
            fast=fast->next;
        
        if(fast==NULL)
            return head;
        
         while(fast!=NULL&&fast->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next;
         }
        
        slow->next=slow->next->next;
        return temp->next;
        
    }
};
