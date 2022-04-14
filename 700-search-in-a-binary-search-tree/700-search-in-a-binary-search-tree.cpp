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
    
    TreeNode* func(TreeNode* root, int val, TreeNode* temp){
        if(root==NULL){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        else if(root->val > val){
            temp = searchBST(root->left, val);
        }
        else if(root->val < val){
            temp = searchBST(root->right, val);
        }
        return temp;
    }
    
    
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp = NULL;
        return func(root,val,temp);
    }
};