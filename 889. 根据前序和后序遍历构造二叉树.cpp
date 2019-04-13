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
    int n;
    vector<int> P,Q;
    void dfs(TreeNode *p,int L_p,int R_p,int L_q,int R_q){
        int i,t;
        // cout<<L_p<<" "<<R_p<<" "<<L_q<<" "<<R_q<<endl;
        if(L_p>R_p)
        return;
        for(i=L_q;i<=R_q;i++){
            if(P[L_p]==Q[i])
            break;
        }
        t=i-L_q+1;
        p->left=new TreeNode(P[L_p]);
        if(L_p+t<=R_p)
        p->right=new TreeNode(P[L_p+t]);
        dfs(p->left,L_p+1,L_p+t-1,L_q,L_q+t-2);
        dfs(p->right,L_p+t+1,R_p,L_q+t,R_q-1);
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int i;
        TreeNode *p,*q;
        q=new TreeNode(pre[0]);
        p=q;
        n=pre.size();
        for(i=0;i<n;i++){
            P.push_back(pre[i]);
            Q.push_back(post[i]);
        }
        dfs(q,1,n-1,0,n-2);
        return p;
    }
};
