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
    vector<int> ans;
    vector<int> G[505];
    void dfs(TreeNode *p){
        if(p==NULL)
        return;
        if(p->left!=NULL){
            G[p->val].push_back(p->left->val);
            G[p->left->val].push_back(p->val);
            dfs(p->left);
        }
        if(p->right!=NULL){
            G[p->val].push_back(p->right->val);
            G[p->right->val].push_back(p->val);
            dfs(p->right);
        }
    }
    void cal(int s,int pre,int sum,int K){
        int i;
        if(sum==K)
        ans.push_back(s);
        for(i=0;i<G[s].size();i++){
            if(G[s][i]==pre)
            continue;
            cal(G[s][i],s,sum+1,K);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        dfs(root);
        cal(target->val,-1,0,K);
        return ans;
    }
};
