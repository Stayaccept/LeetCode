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
    int sum;
    void dfs(TreeNode *p){
        if(p==NULL)
        return;
        dfs(p->right);
        sum+=p->val;
        p->val=sum;
        dfs(p->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        sum=0;
        dfs(root);
        return root;
    }
};
