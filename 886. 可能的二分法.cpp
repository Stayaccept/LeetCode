class Solution {
public:
    int vis[2005];
    vector<int> G[2005];
    void dfs(int s,int op,int &sig){
        int i,u;
        vis[s]=op;
        if(sig==0)
        return;
        for(i=0;i<G[s].size();i++){
            u=G[s][i];
            if(vis[u]==vis[s]){
                sig=0;
                return;
            }
            if(vis[u]==-1)
            dfs(u,op^1,sig);
        }
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        int i,j,u,v,sig;
        for(i=1;i<=N;i++)
        G[i].clear();
        for(i=0;i<dislikes.size();i++){
            u=dislikes[i][0];
            v=dislikes[i][1];
            G[u].push_back(v);
            G[v].push_back(u);
        }
        memset(vis,-1,sizeof(vis));
        for(i=1;i<=N;i++){
            if(vis[i]==-1){
                sig=1;
                dfs(i,0,sig);
                if(sig==0)
                return 0;
            }
        }
        return 1;
    }
};
