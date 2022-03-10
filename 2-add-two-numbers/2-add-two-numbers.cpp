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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> l1_list,l2_list;
        while(l1){
            l1_list.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            l2_list.push_back(l2->val);
            l2=l2->next;
        }
        int n1=l1_list.size();
        int n2=l2_list.size();
        int carry=0;
        int i=0,j=0;
        // int res=0;
        vector<int> res;
        int temp;
        while(i<n1 || j<n2){
            if(i>=n1){
                temp=l2_list[j]+carry;
            }
            else if(j>=n2){
                temp=l1_list[i]+carry;
            }
            else{
                temp = l1_list[i]+l2_list[j]+carry;    
            }
            res.push_back(temp%10);
            carry=temp/10;
            i++;
            j++;
        }
        if(carry>0){
             res.push_back(carry);     
        }
       
        ListNode* pre = new ListNode(0);
        ListNode* dummy=pre;
        for(int i=0;i<res.size();i++){
            ListNode* temp = new ListNode(res[i]);
            pre->next=temp;
            pre=temp;
        }
        return dummy->next;
    }
    
};