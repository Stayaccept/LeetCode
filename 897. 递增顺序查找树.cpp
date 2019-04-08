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
    TreeNode *p,*q,*t;
    void dfs(TreeNode *s){
        if(s==NULL)
        return;
        dfs(s->left);
        if(p==NULL)
            p=q=s;
        else{
            q->left=NULL;
            t=new TreeNode(s->val);
            q->right=t;
            q=q->right;
        }
        dfs(s->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        p=NULL;
        dfs(root);
        return p;
    }
};
