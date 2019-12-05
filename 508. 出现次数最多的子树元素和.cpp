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
    map<int,int> mp;
    map<int,int>::iterator ite;
    int dfs(TreeNode *p){
        int tmp;
        if(p==NULL)
        return 0;
        tmp=dfs(p->left)+p->val+dfs(p->right);
        mp[tmp]++;
        ans=max(ans,mp[tmp]);
        return tmp;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> G;
        ans=0;
        mp.clear();
        dfs(root);
        for(ite=mp.begin();ite!=mp.end();ite++){
            if((ite->second)==ans)
            G.push_back(ite->first);
        }
        return G;
    }
};
