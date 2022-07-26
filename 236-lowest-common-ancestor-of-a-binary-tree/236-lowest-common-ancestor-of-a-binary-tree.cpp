/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root, TreeNode* temp, vector<TreeNode*>&v,int &flag){
        if(root==NULL){
            return ;
        }
        if(root->val == temp->val){
            flag=1;
            v.push_back(temp);
            return ;
        }
        v.push_back(root);
        preorder(root->left, temp, v, flag);
        if(flag==1){
            return;
        }
        preorder(root->right, temp, v, flag);
        if(flag==1){
            return;
        }
        
        v.pop_back();
        
        return;
        
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path_p;
        vector<TreeNode*> path_q;
        int flag=0;
        
        preorder(root,p,path_p,flag);
        flag = 0;
        preorder(root,q,path_q,flag);
        
        int i=0;
        int j=0;
        TreeNode* res;
        while(i<path_p.size() and j<path_q.size()){
            if(path_p[i]->val == path_q[j]->val){
                res=path_p[i];
            }
            i++;
            j++;
        }
        
        return res;
        
        
    }
};