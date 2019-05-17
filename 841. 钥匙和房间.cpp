class Solution {
public:
    int vis[1005];
    vector<int> G[1005];
    void dfs(int S){
        int i,u;
        vis[S]=1;
        for(i=0;i<G[S].size();i++){
            u=G[S][i];
            if(vis[u]==1)
            continue;
            dfs(u);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int i,j,u,n;
        n=rooms.size();
        for(i=0;i<n;i++){
            for(j=0;j<rooms[i].size();j++){
                u=rooms[i][j];
                G[i].push_back(u);
            }
        }
        memset(vis,0,sizeof(vis));
        dfs(0);
        for(i=0;i<n;i++)
        if(vis[i]==0)
        return 0;
        return 1;
    }
};
