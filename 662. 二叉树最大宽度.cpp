/*
 * @lc app=leetcode.cn id=662 lang=cpp
 *
 * [662] 二叉树最大宽度
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
    struct node{
        TreeNode *p;
        long double id;
        int dep;
    };
    queue<node> qu;
    long double mi[2005],mx[2005];
    int widthOfBinaryTree(TreeNode* root) {
        node u;
        int i,m;
        long double ans;
        qu.push((node){root,1,1});
        for(i=1;i<=2000;i++)
        mi[i]=mx[i]=0;
        m=0;
        while(qu.size()){
            u=qu.front();
            qu.pop();
            m=max(m,u.dep);
            if(mi[u.dep]==0)
            mi[u.dep]=u.id;
            else
            mi[u.dep]=min(mi[u.dep],u.id);
            if(mx[u.dep]==0)
            mx[u.dep]=u.id;
            else
            mx[u.dep]=max(mx[u.dep],u.id);
            if(u.p->left!=NULL)
            qu.push((node){u.p->left,u.id*2.0,u.dep+1});
            if(u.p->right!=NULL)
            qu.push((node){u.p->right,u.id*2.0+1,u.dep+1});
        }
        ans=0;
        for(i=1;i<=m;i++)
        ans=max(ans,mx[i]-mi[i]+1);
        return ans;
    }
};

