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
    int ans;
    int dfs(TreeNode *p){
        int u,v;
        if(p==NULL)
        return 0;
        u=dfs(p->left);
        v=dfs(p->right);
        ans=max(ans,u+v+1);
        return max(u,v)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans=0;
        dfs(root);
        if(ans>0)
        ans--;
        return ans;
    }
};
