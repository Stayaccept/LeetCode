#include <bits/stdc++.h>

using namespace std;
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
    void dfs(TreeNode *p,int v,int d,int dep){
        TreeNode *tmp;
        if(p==NULL)
        return;
        if(dep==d-1){
            tmp=new TreeNode(v);
            tmp->left=p->left;
            p->left=tmp;
            tmp=new TreeNode(v);
            tmp->right=p->right;
            p->right=tmp;
        }
        dfs(p->left,v,d,dep+1);
        dfs(p->right,v,d,dep+1);
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode *p=new TreeNode(v);
        if(d==1){
            p->left=root;
            return p;
        }
        dfs(root,v,d,1);
        return root;
    }
};
