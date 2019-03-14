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
    void dfs(TreeNode *s,int l,int r){
        if(s==NULL)
        return;
        if(s->val>=l&&s->val<=r)
        ans+=s->val;
        dfs(s->left,l,r);
        dfs(s->right,l,r);
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        ans=0;
        dfs(root,L,R);
        return ans;
    }
};
