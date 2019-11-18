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
    int pre,ans;
    int INF=0x3f3f3f3f;
    void dfs(TreeNode *p){
        if(p==NULL)
        return;
        dfs(p->left);
        if(pre!=INF)
        ans=min(ans,(p->val)-pre);
        pre=p->val;
        dfs(p->right);
    }
    int getMinimumDifference(TreeNode* root) {
        ans=pre=INF;
        dfs(root);
        return ans;
    }
};
