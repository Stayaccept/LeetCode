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
    vector<TreeNode*> tmp;
    vector<vector<TreeNode*> > ans;
    vector<TreeNode*> allPossibleFBT(int N) {
        int i,j,k,P,Q;
        TreeNode *p,*q;
        p=new TreeNode(0);
        tmp.clear();
        for(i=0;i<=N;i++)
        ans.push_back(tmp);
        ans[1].push_back(p);
        for(i=3;i<=N;i+=2){
            for(j=1;j<=i-2;j+=2){
                k=i-j-1;
                for(P=0;P<ans[j].size();P++){
                    for(Q=0;Q<ans[k].size();Q++){
                        q=new TreeNode(0);
                        q->left=ans[j][P];
                        q->right=ans[k][Q];
                        ans[i].push_back(q);
                    }
                }
            }
        }
        return ans[N];
    }
};
