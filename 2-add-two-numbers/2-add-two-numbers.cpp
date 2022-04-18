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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* res=new ListNode(-1);
        ListNode* temp=res;
        
        int carry=0;
        while(l1||l2||carry)
        {
            int a=0, b=0;
            if(l1)
                a=l1->val;
            if(l2)
                b=l2->val;
            
            int sum=a+b+carry;
            
            
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            
        
            carry=sum/10;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        
        return res->next;
        
    }
};