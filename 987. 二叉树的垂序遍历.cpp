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
        int y,dep;
        TreeNode* p;
        friend bool operator<(node a,node b){
            if(a.dep==b.dep)
            return (a.p)->val>(b.p)->val;
            return a.dep>b.dep;
        }
    }u;
    priority_queue<node> qu;
    vector<int> tmp[550];
    void bfs(TreeNode* S){
        qu.push((node){255,1,S});
        while(qu.size()){
            u=qu.top();
            qu.pop();
            tmp[u.y].push_back((u.p)->val);
            if((u.p)->left!=NULL)
            qu.push((node){u.y-1,u.dep+1,(u.p)->left});
            if((u.p)->right!=NULL)
            qu.push((node){u.y+1,u.dep+1,(u.p)->right});
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int i,j;
        vector<vector<int> > ans;
        for(i=0;i<550;i++)
        tmp[i].clear();
        bfs(root);
        ans.clear();
        for(i=0;i<550;i++){
            if(tmp[i].size()==0)
            continue;
            ans.push_back(tmp[i]);
        }
        return ans;
    }
};
