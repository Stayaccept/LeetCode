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
    void dfs(TreeNode *s,TreeNode *p,int op,int val){
        if(s==NULL){
            if(op==0)
            p->left=new TreeNode(val);
            else
            p->right=new TreeNode(val);
            return;
        }
        if(val<s->val)
        dfs(s->left,s,0,val);
        else
        dfs(s->right,s,1,val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *ans,*tmp;
        ans=root,tmp=NULL;
        dfs(root,tmp,0,val);
        return ans;
    }
};
