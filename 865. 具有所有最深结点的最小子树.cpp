class Solution {
public:
    int dp[505];
    TreeNode *ans;
    void dfs(TreeNode *p,int sum){
        if(p==NULL)
        return;
        dp[p->val]=sum;
        if(p->left!=NULL){
            dfs(p->left,sum+1);
            dp[p->val]=max(dp[p->val],dp[p->left->val]);
        }
        if(p->right!=NULL){
            dfs(p->right,sum+1);
            dp[p->val]=max(dp[p->val],dp[p->right->val]);
        }
    }
    void cal(TreeNode *p){
        int u,v;
        u=v=0;
        if(p->left!=NULL)
        u=dp[p->left->val];
        if(p->right!=NULL)
        v=dp[p->right->val];
        if(u==v){
            ans=p;
            return;
        }
        else if(u>v)
        cal(p->left);
        else
        cal(p->right);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        dfs(root,1);
        ans=NULL;
        cal(root);
        return ans;
    }
};
