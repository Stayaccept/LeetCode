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
    vector<int> G[2];
    void dfs(TreeNode *p,int op){
        if(p==NULL)
        return;
        if(p->left==NULL&&p->right==NULL)
        G[op].push_back(p->val);
        if(p->left!=NULL)
        dfs(p->left,op);
        if(p->right!=NULL)
        dfs(p->right,op);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        int i;
        dfs(root1,0);
        dfs(root2,1);
        if(G[0].size()!=G[1].size())
        return 0;
        for(i=0;i<G[0].size();i++)
        if(G[0][i]!=G[1][i])
        return 0;
        return 1;
    }
};
