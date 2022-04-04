class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k1) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* curr = head;
        
        int counter = 1;
        while(curr!=NULL){
            if (counter<k1){
                left = left->next;
            }
            if (counter>k1){
                right = right->next;
            }
            curr = curr->next;
            counter++;
        }
        //swap values
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        
        return head;
    }
};