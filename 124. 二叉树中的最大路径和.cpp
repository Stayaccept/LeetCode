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
        int u,v,w,tmp;
        if(p==NULL)
        return 0;
        u=dfs(p->left);
        v=dfs(p->right);
        w=p->val;
        tmp=max(w,max(u+w,v+w));
        ans=max(ans,max(tmp,u+v+w));
        return tmp;
    }
    int maxPathSum(TreeNode* root) {
        int INF=0x3f3f3f3f;
        ans=-INF;
        dfs(root);
        return ans;
    }
};
