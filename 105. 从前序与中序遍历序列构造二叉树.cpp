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
    vector<int> pre,in;
    TreeNode* dfs(int pre_l,int pre_r,int in_l,int in_r){
        int i;
        if(pre_l>pre_r||in_l>in_r)
        return NULL;
        TreeNode *p=new TreeNode(pre[pre_l]);
        for(i=in_l;i<=in_r;i++){
            if(pre[pre_l]==in[i])
            break;
        }
        p->left=dfs(pre_l+1,pre_l+i-in_l,in_l,i-1);
        p->right=dfs(pre_l+i-in_l+1,pre_r,i+1,in_r);
        return p;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n;
        n=preorder.size();
        pre=preorder,in=inorder;
        return dfs(0,n-1,0,n-1);
    }
};
