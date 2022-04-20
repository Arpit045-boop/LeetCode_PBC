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
class BSTIterator {
public:
    TreeNode* temp;
    vector<int> v;
    void inorder(TreeNode* Node, vector<int> &v){
        if(Node==NULL){
            return ;
        }
        inorder(Node->left,v);
        v.push_back(Node->val);
        inorder(Node->right,v);
    }
    BSTIterator(TreeNode* root) {
        temp=root;
        inorder(temp,v);
        reverse(v.begin(),v.end());
    }
    int next() {
        // vector<int>        
        int res=v[v.size()-1];
        v.pop_back();
        return res;
    }
    
    bool hasNext() {
        if(v.size()==0){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */