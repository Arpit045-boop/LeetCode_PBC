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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        
        int pos = count - n + 1;
        // cout<<pos<<endl;
        int i=1;
        ListNode* cur = head;
        ListNode* pre=NULL;
        if(pos==1){
            return head->next;
        }
        while(i<pos){
            pre=cur;
            cur = cur->next;
            i++;
            // cout<<pre->val<<endl;
        }
        if((cur->next)==NULL){
            pre->next=NULL;
        }
        else{
            pre->next = cur->next;
            
        }
        return head;
    }
};