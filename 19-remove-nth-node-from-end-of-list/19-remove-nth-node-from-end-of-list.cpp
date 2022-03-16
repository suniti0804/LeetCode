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
        ListNode* temp=new ListNode(-1);
        temp->next=head;
        ListNode* fast=temp;
        ListNode* slow=temp;
        
        while(n--)
            fast=fast->next;
        while(fast&&fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return temp->next;
    }
};