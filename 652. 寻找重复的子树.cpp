/*
 * @lc app=leetcode.cn id=652 lang=cpp
 *
 * [652] 寻找重复的子树
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
    map<string,int> mp;
    vector<TreeNode*> ans;
    string dfs(TreeNode *p){
        string s,tmp;
        if(p==NULL)
        return "#";
        tmp=('a'+p->val);
        s=tmp+dfs(p->left)+dfs(p->right);
        mp[s]++;
        if(mp[s]==2)
        ans.push_back(p);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        mp.clear();
        dfs(root);
        return ans;
    }
};

