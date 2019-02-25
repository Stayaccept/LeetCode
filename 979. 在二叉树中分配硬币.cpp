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
    void dfs(TreeNode* rt){
        if(rt==NULL)
        return;
        if(rt->left!=NULL){
            dfs(rt->left);
            ans+=(abs(rt->left->val-1));
            rt->val+=(rt->left->val-1);
        }
        if(rt->right!=NULL){
            dfs(rt->right);
            ans+=(abs(rt->right->val-1));
            rt->val+=(rt->right->val-1);
        }
    }
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
