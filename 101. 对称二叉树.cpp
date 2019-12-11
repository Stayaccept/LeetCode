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
    int dfs(TreeNode *p,TreeNode *q){
        if(p==NULL&&q==NULL)
        return 1;
        else if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL))
        return 0;
        else
        return (p->val==q->val)&&dfs(p->left,q->right)&&dfs(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return 1;
        return dfs(root->left,root->right);
    }
};
