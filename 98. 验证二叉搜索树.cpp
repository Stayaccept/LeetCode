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
    int sig;
    long long pre;
    long long INF=0x3f3f3f3f3f;
    void dfs(TreeNode *p){
        if(p==NULL||sig==0)
        return;
        dfs(p->left);
        if(p->val<=pre){
            sig=0;
            return;
        }
        pre=p->val;
        dfs(p->right);
    }
    bool isValidBST(TreeNode* root) {
        sig=1,pre=-INF;
        dfs(root);
        return sig;
    }
};
