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
    int op,sig;
    vector<int> a,ans;
    void dfs(TreeNode* rt){
        if(sig==-1)
        return;
        if(rt->val!=a[op]){
            sig=-1;
            return;
        }
        if(rt->left==NULL&&rt->right==NULL)
        return;
        if(rt->left!=NULL&&rt->left->val!=a[op+1]){
            swap(rt->left,rt->right);
            ans.push_back(rt->val);
        }
        if(rt->left!=NULL){
            op++;
            dfs(rt->left);
        }
        if(rt->right!=NULL){
            op++;
            dfs(rt->right);
        }
    }
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        op=sig=0;
        a=voyage;
        ans.clear();
        dfs(root);
        if(sig==-1){
            ans.clear();
            ans.push_back(-1);
        }
        return ans;
    }
};
