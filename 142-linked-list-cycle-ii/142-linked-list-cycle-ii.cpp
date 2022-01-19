/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        if(head->next->next==head){
            return head;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        do
        {
            if(fast!=NULL && fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;    
            }
            else
            {
                return NULL;
            }
            
        }while(fast!=slow);
        fast=head;
        while(fast->next!=slow->next){
            slow=slow->next;
            fast=fast->next;
        }
        if(slow==fast && slow==head){
            return slow;    
        }
        else
        {
            return slow->next;
        }
        
        
    }
};