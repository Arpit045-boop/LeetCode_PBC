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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode *ptr = head;
        while(ptr){
            n++;
            ptr=ptr->next;
        }
        ListNode* temp= head;
        ListNode* pre = NULL;
        int i=1;
        
        while(i<k){
            pre=temp;
            temp = temp->next;
            i++;
        }
        ListNode* cur = temp;
        temp = head;
        int j=1;
        while(j<(n-k+1)){
            temp=temp->next;
            j++;
        }
        // ListNode* dummy=cur->next;
        int temp1;
        temp1=temp->val;
        temp->val = cur->val;
        cur->val = temp1;
        return head;
        
    }
};