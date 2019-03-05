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
    int bfs(TreeNode* S){
        TreeNode *u;
        queue<TreeNode*> qu;
        qu.push(S);
        while(qu.size()){
            u=qu.front();
            qu.pop();
            if(u==NULL)
            break;
            qu.push(u->left);
            qu.push(u->right);
        }
        while(qu.size()){
            u=qu.front();
            qu.pop();
            if(u!=NULL)
            return 0;
        }
        return 1;
    }
    bool isCompleteTree(TreeNode* root) {
        return bfs(root);
    }
};
