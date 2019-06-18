class Solution {
public:
    int vis[10005];
    vector<int> G[10005];
    void dfs(int s){
        int i,u;
        if(vis[s]!=0)
        return;
        vis[s]=1;
        for(i=0;i<G[s].size();i++){
            u=G[s][i];
            dfs(u);
            if(vis[u]==1)
            return;
        }
        vis[s]=2;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int i,j,n;
        vector<int> ans;
        n=graph.size();
        for(i=0;i<n;i++){
            for(j=0;j<graph[i].size();j++){
                G[i].push_back(graph[i][j]);
            }
        }
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++){
            if(vis[i]!=0)
            continue;
            dfs(i);
        }
        for(i=0;i<n;i++){
            if(vis[i]==2)
            ans.push_back(i);
        }
        return ans;
    }
};
