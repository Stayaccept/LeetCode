/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入 BST
 */
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
    int ans;
    map<int,int> mp;
    void dfs(TreeNode *p,int k){
        int u;
        if(p==NULL||ans==1)
        return;
        u=p->val;
        if(mp[k-u]==1){
            ans=1;
            return;
        }
        mp[u]=1;
        dfs(p->left,k);
        dfs(p->right,k);
    }
    bool findTarget(TreeNode* root, int k) {
        ans=0;
        mp.clear();
        dfs(root,k);
        return ans;
    }
};

