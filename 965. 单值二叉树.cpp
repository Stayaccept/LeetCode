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
    int id,sig;
    void dfs(TreeNode *s){
        if(sig==0)
        return;
        if(s->left!=NULL){
            if(s->left->val!=id){
                sig=0;
                return;
            }
            dfs(s->left);
        }
        if(s->right!=NULL){
            if(s->right->val!=id){
                sig=0;
                return;
            }
            dfs(s->right);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        id=root->val;
        sig=1;
        dfs(root);
        return sig;
    }
};
