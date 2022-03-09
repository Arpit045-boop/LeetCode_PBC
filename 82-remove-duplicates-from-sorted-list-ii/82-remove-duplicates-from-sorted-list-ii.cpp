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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* pre=dummy;
        ListNode* cur=head;
        while(cur->next!=NULL){
            if(cur->val == cur->next->val){
                while(cur->val == cur->next->val){
                    cur->next = cur->next->next;
                    if(cur->next == NULL){
                        break;
                    }
                }
                pre->next = cur->next;
                cur=pre->next;
            }
            if(cur==NULL || cur->next==NULL){
                break;
            }
            if(cur->val != cur->next->val){
                pre = cur;
                cur=cur->next;    
            }
            
            
        }
        return dummy->next;
    }
};