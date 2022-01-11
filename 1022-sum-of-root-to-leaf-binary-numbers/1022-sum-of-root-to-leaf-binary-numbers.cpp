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
    int binToint(vector<int> v){
        int res=0;
        int j=0;
        for(int i=v.size()-1;i>=0;i--){
            res=res+v[i]*pow(2,j);
            j++;
        }
        return res;
    }
    void dfs(TreeNode* root, vector<int> &v,int &sum){
        
        if(root==NULL){
            return ;
        }
        v.push_back(root->val);
        dfs(root->left,v,sum);
        dfs(root->right,v,sum);
        if(root->left==NULL and root->right==NULL){
            sum=sum+binToint(v);    
        }
        
        v.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int> v;
        int sum=0;
        dfs(root,v,sum);
        return sum;
    }
};