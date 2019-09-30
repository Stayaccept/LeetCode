/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
 */

// @lc code=start
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
    long long val[1005],num[1005];
    void dfs(TreeNode *p,int op){
        if(p==NULL)
        return;
        num[op]++;
        val[op]+=(p->val);
        dfs(p->left,op+1);
        dfs(p->right,op+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int i;
        vector<double> ans;
        memset(val,0,sizeof(val));
        memset(num,0,sizeof(num));
        dfs(root,1);
        for(i=1;;i++){
            if(num[i]==0)
            break;
            ans.push_back(val[i]*1.0/num[i]);
        }
        return ans;
    }
};
// @lc code=end

