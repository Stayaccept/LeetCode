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
    void dfs(TreeNode* &s){
        if(s==NULL)
        return;
        dfs(s->left);
        dfs(s->right);
        if(s->left==NULL&&s->right==NULL&&s->val==0)
        s=NULL;
    }
    TreeNode* pruneTree(TreeNode* root) {
        dfs(root);
        return root;
    }
};
