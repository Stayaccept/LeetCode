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
    string change(int x){
        int sig=0;
        string s="";
        if(x==0)
        return "0";
        if(x<0){
            sig=1;
            x=-x;
        }
        while(x){
            s+=('0'+x%10);
            x/=10;
        }
        if(sig==1)
        s+='-';
        reverse(s.begin(),s.end());
        return s;
    }
    string dfs(TreeNode *p){
        TreeNode *u,*v;
        u=p->left,v=p->right;
        if(u==NULL&&v==NULL)
        return change(p->val);
        if(u!=NULL&&v!=NULL)
        return change(p->val)+'('+dfs(u)+')'+'('+dfs(v)+')';
        else if(u!=NULL&&v==NULL)
        return change(p->val)+'('+dfs(u)+')';
        else
        return change(p->val)+"()"+'('+dfs(v)+')';
    }
    string tree2str(TreeNode* t) {
        if(t==NULL)
        return "";
        return dfs(t);
    }
};
