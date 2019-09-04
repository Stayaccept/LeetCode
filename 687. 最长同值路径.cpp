/*
 * @lc app=leetcode.cn id=687 lang=cpp
 *
 * [687] 最长同值路径
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
    int dfs(TreeNode *p,int x){
        int u,v;
        if(p==NULL)
        return 0;
        u=dfs(p->left,p->val);
        v=dfs(p->right,p->val);
        ans=max(ans,u+v);
        if(p->val==x)
        return max(u,v)+1;
        return 0;
    }
    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        if(root==NULL)
        return 0;
        dfs(root,root->val);
        return ans;
    }
};

