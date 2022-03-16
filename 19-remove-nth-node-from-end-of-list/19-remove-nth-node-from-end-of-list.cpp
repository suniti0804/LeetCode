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
        ListNode* curr=head;
        int len=0;
        while(curr)
        {
            curr=curr->next;
            len++;
        }

        //edge cases
        if(len==n)
        {
            head=head->next;
            return head;
        }
      
        len-=n;
        curr=head;
        while(--len)
            curr=curr->next;
        
        curr->next=curr->next->next;
        return head;
        
    }
};