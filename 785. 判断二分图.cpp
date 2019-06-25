class Solution {
public:
    int sig,vis[105];
    vector<int> G[105];
    void dfs(int s,int col){
        int i,u;
        vis[s]=col;
        if(sig==0)
        return;
        for(i=0;i<G[s].size();i++){
            u=G[s][i];
            if(vis[u]!=-1){
                if(vis[u]==col){
                    sig=0;
                    return;
                }
            }
            else
            dfs(u,col^1);
        }
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int i,j,n,u;
        n=graph.size();
        for(i=0;i<n;i++){
            for(j=0;j<graph[i].size();j++){
                u=graph[i][j];
                G[i].push_back(u);
            }
        }
        memset(vis,-1,sizeof(vis));
        for(i=0;i<n;i++){
            sig=1;
            if(vis[i]==-1)
            dfs(i,0);
            if(sig==0)
            return 0;
        }
        return 1;
    }
};
