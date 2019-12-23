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
    stack<TreeNode*> sta;
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode *p;
        vector<int> G;
        G.clear();
        while(root!=NULL||sta.size()!=0){
            while(root!=NULL){
                G.push_back(root->val);
                sta.push(root);
                root=root->left;
            }
            root=sta.top();
            root=root->right;
            sta.pop();
        }
        return G;
    }
};
