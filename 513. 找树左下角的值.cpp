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
    queue<TreeNode*> qu;
    int findBottomLeftValue(TreeNode* root) {
        TreeNode *p;
        qu.push(root);
        while(qu.size()){
            p=qu.front();
            qu.pop();
            if(p->right!=NULL)
            qu.push(p->right);
            if(p->left!=NULL)
            qu.push(p->left);
        }
        return p->val;
    }
};
