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
    TreeNode *ans;
    void dfs(TreeNode *p,int val){
        if(p==NULL)
        return;
        if(p->val==val){
            ans=p;
            return;
        }
        if(val<p->val)
        dfs(p->left,val);
        else
        dfs(p->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        ans=NULL;
        dfs(root,val);
        return ans;
    }
};
