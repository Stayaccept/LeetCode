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
    vector<int> G;
    int mx,pre,num;
    void dfs(TreeNode *p){
        if(p==NULL)
        return;
        dfs(p->left);
        if(pre!=-1){
            if(pre==p->val)
            num++;
            else
            num=1;
        }
        else
        num=1;
        pre=p->val;
        if(num>mx){
            mx=num;
            G.clear();
            G.push_back(p->val);
        }
        else if(num==mx)
        G.push_back(p->val);
        dfs(p->right);
    }
    vector<int> findMode(TreeNode* root) {
        G.clear();
        pre=-1,mx=num=0;
        dfs(root);
        return G;
    }
};
