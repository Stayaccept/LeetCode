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
    int dfs(TreeNode *s,TreeNode *p){
        if(s==NULL&&p==NULL)
        return 1;
        else if(s!=NULL&&p!=NULL&&s->val==p->val)
        return dfs(s->left,p->left)&&dfs(s->right,p->right);
        else
        return 0;
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==NULL)
        return 0;
        if(s->val==t->val)
        return dfs(s,t)||isSubtree(s->left,t)||isSubtree(s->right,t);
        else
        return isSubtree(s->left,t)||isSubtree(s->right,t);
    }
};
