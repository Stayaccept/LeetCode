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
    int INF=0x3f3f3f3f;
    TreeNode* pre=NULL;
    void dfs(TreeNode* s){
        if(s==NULL)
        return;
        dfs(s->left);
        if(pre!=NULL)
        ans=min(ans,s->val-pre->val); 
        pre=s;
        dfs(s->right);
    }
    int minDiffInBST(TreeNode* root) {
        ans=INF;
        dfs(root);
        return ans;
    }
};
