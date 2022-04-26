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
    
    int len(ListNode* head)
    {
        int ctr=0;
        while(head)
        {
            ctr++;
            head=head->next;
        }
        
        return ctr;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(!head||len(head)<k)
            return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next;
        
        int ctr=k;
        while(ctr--&&curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        if(next)
            head->next=reverseKGroup(next, k);
        
        return prev;
        
    }
};