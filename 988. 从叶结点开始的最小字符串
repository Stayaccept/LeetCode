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
    string ans="";
    void dfs(TreeNode* S,string tmp){
        tmp+=('a'+S->val);
        if(S->left==NULL&&S->right==NULL){
            reverse(tmp.begin(),tmp.end());
            if(ans.size()==0)
            ans=tmp;
            else
            ans=min(ans,tmp);
            return;
        }
        if(S->left!=NULL)
        dfs(S->left,tmp);
        if(S->right!=NULL)
        dfs(S->right,tmp);
    }
    string smallestFromLeaf(TreeNode* root) {
        string tmp="";
        dfs(root,tmp);
        return ans;
    }
};
