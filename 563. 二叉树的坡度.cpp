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
    int ans=0;
    int dfs(TreeNode* root) {
        int u,v;
        if(root==NULL)
        return 0;
        u=dfs(root->left);
        v=dfs(root->right);
        ans+=abs(u-v);
        return u+v+root->val;
    }
    int findTilt(TreeNode* root) {
        ans=0;
        dfs(root);
        return ans;
    }
};
