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
    
   /* ListNode* reverse(ListNode* list)
    {
        ListNode* curr=list;
        ListNode* prev=NULL;
        
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=curr->next;
        }
        return prev;
    } */
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode res(0);
        ListNode* temp=&res;
    
        int sum=0;
        int carry=0;
        
        while(l1!=NULL||l2!=NULL||carry)
        {
            int a=(l1!=NULL?l1->val:0);
            int b=(l2!=NULL?l2->val:0);
            
            sum=((a+b+carry)%10);
            carry=(a+b+carry)/10;
            
            temp->next=new ListNode(sum);
            temp=temp->next;
            
            if(l1)
               l1=l1->next;
            if(l2)
               l2=l2->next;
            
        }
    
        return res.next;
        
    }
};