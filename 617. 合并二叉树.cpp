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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode *p;
        if(t1==NULL&&t2==NULL)
        return NULL;
        else if(t1!=NULL&&t2==NULL)
        return t1;
        else if(t1==NULL&&t2!=NULL)
        return t2;
        else{
            p=new TreeNode(t1->val+t2->val);
            p->left=mergeTrees(t1->left,t2->left);
            p->right=mergeTrees(t1->right,t2->right);
            return p;
        }
    }
};
