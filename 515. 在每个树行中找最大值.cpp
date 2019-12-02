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
    void dfs(TreeNode *p,int pos){
        int v,tmp;
        if(p==NULL)
        return;
        if(G.size()<pos)
        G.push_back(p->val);
        else
        G[pos-1]=max(G[pos-1],p->val);
        dfs(p->left,pos+1);
        dfs(p->right,pos+1);
    }
    vector<int> largestValues(TreeNode* root) {
        G.clear();
        dfs(root,1);
        return G;
    }
};
