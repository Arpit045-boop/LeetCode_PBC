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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL || left==right){
            return head;
        }
        
        
        
        
        ListNode* temp = head;
        ListNode* pre = head;
        ListNode* cur = head;
        ListNode* nex = head;
        
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        
        temp=head;
        int i=1;
        while(i<left){
            pre=temp;
            temp=temp->next;
            i++;
        }
        cur=temp;
        nex=cur->next;
        int j=left;
        // cout<<cur->val<<endl;
        while(j<right){
            ListNode* p = nex->next;
            nex->next = cur;
            // cout<<cur->val<<endl;
            cur=nex;
            nex=p;
            j++;
        }
        temp->next = nex;
        if(left==1){
            head=cur;
        }
        else if(left != 1){
            pre->next = cur;    
        }

        return head;
    }
};