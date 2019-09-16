/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
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
    long long u,v;
    void dfs(TreeNode *s){
        if(s==NULL)
        return;
        if(s->val<u)
        v=u,u=s->val;
        else if(s->val>u&&s->val<v)
        v=s->val;
        dfs(s->left);
        dfs(s->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        long long INF=2147483648;
        u=v=INF;
        dfs(root);
        if(v==INF)
        v=-1;
        return v;
    }
};

