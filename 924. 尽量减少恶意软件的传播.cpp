class Solution {
public:
    int vis[305];
    vector<int> G[305];
    void dfs(int s){
        int i,u;
        vis[s]=1;
        for(i=0;i<G[s].size();i++){
            u=G[s][i];
            if(vis[u]==1)
            continue;
            dfs(u);
        }
    }
    int minMalwareSpread(vector<vector<int>>& graph, vector<int>& initial) {
        int i,j,n,sum,ans,tmp;
        n=graph.size();
        for(i=0;i<n;i++)
        G[i].clear();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(graph[i][j]==1){
                    G[i].push_back(j);
                }
            }
        }
        sum=n+1;
        sort(initial.begin(),initial.end());
        for(i=0;i<initial.size();i++){
            memset(vis,0,sizeof(vis));
            for(j=0;j<initial.size();j++){
                if(j==i)
                continue;
                dfs(initial[j]);
            }
            tmp=0;
            for(j=0;j<n;j++)
            if(vis[j]==1)
            tmp++;
            if(tmp<sum){
                sum=tmp;
                ans=initial[i];
            }
        }
        return ans;
    }
};
