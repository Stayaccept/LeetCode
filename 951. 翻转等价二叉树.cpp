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
    int sig;
    void dfs(TreeNode *rt1,TreeNode *rt2){
        TreeNode *le1,*le2,*re1,*re2;
        if(sig==0||rt1==NULL)
        return;
        if(rt1!=NULL&&rt2!=NULL){
            le1=rt1->left,le2=rt2->left;
            re1=rt1->right,re2=rt2->right;
        }
        if(!((le1!=NULL&&le2!=NULL&&le1->val==le2->val)||
             (le1==NULL&&le2==NULL)))
        rt1->left=re1,rt1->right=le1;
        le1=rt1->left,le2=rt2->left;
        re1=rt1->right,re2=rt2->right;
        if(!((le1==NULL&&le2==NULL)||(le1!=NULL&&le2!=NULL&&le1->val==le2->val))){
            sig=0;
            return;
        }
        if(!((re1==NULL&&re2==NULL)||(re1!=NULL&&re2!=NULL&&re1->val==re2->val))){
            sig=0;
            return;
        }
        dfs(le1,le2);
        dfs(re1,re2);
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        sig=1;
        if(root1==NULL&&root2==NULL)
        return 1;
        if((root1==NULL&&root2!=NULL)||(root1!=NULL&&root2==NULL)||(root1->val!=root2->val))
        return 0;
        dfs(root1,root2);
        return sig;
    }
};
