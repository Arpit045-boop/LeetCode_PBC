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
    int maxAncestorDiff(TreeNode* root,int curMax=INT_MIN, int curMin=INT_MAX) {
        if(root==NULL){
            return curMax-curMin;
        }
        curMin=min(curMin,root->val);
        curMax=max(curMax,root->val);
        return max(maxAncestorDiff(root->left,curMax,curMin),maxAncestorDiff(root->right,curMax,curMin));
    }
};