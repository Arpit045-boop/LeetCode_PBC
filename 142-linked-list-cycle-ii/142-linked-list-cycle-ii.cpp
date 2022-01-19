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
        // vector<bool> vis(100000,false)
        if(head==NULL or head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        unordered_map<ListNode*,int> mp;
        int pos=-1;
        int flag=0;
        while(temp){
            if(mp.count(temp)==1){
                pos=mp[temp];
                flag=1;
                break;
            }
            else{
                pos++;
                mp[temp]=pos;
            }
            temp=temp->next;
        }
        // cout<<pos;
        if(flag==0){
            return NULL;
        }
        while(pos--){
            head=head->next;
        }
        
        return head;
    }
};