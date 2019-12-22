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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> G;
        G.clear();
        while(root!=NULL||sta.size()!=0){
            if(root!=NULL){
                sta.push(root);
                root=root->left;
            }
            else{
                root=sta.top();
                sta.pop();
                G.push_back(root->val);
                root=root->right;
            }
        }
        return G;
    }
};
