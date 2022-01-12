/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode* node=new TreeNode(val);
            return node;
        }
        TreeNode* temp=root;
        TreeNode* pre;
        while(temp){
            if(temp->val < val){
                pre=temp;
                temp=temp->right;
            }
            else{
                pre=temp;
                temp=temp->left;
            }
        }
        if(pre->val<val){
            TreeNode* node=new TreeNode(val);
            pre->right=node;
        }
        else if(pre->val>val){
            TreeNode* node=new TreeNode(val);
            pre->left=node;
        }
        return root;
    }
};