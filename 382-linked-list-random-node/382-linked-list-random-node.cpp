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
    vector<int> result;
    // int len=0
    
    ListNode* temp;
    Solution(ListNode* head) {
        temp=head;
        ListNode* dummy=temp;
        while(dummy){
            result.push_back(dummy->val);
            dummy=dummy->next;
        }
        // cout<<"size="<<result.size()<<endl;
    }
    
    int getRandom() {
        ListNode* dummy=temp;
        int index=rand()%(result.size());
        // cout<<index<<endl;
        for(int i=0;i<index;i++){
            dummy=dummy->next;
        }
        
        return dummy->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */