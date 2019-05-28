class Solution {
public:
    vector<int> G[10005];
    int n,ans[10005],dp[10005][2];
    void dfs(int s,int fa){
        int i,u;
        dp[s][0]=0,dp[s][1]=1;
        for(i=0;i<G[s].size();i++){
            u=G[s][i];
            if(u==fa)
            continue;
            dfs(u,s);
            dp[s][0]+=(dp[u][0]+dp[u][1]);
            dp[s][1]+=dp[u][1];
        }
    }
    void cal(int s,int fa){
        int i,u;
        for(i=0;i<G[s].size();i++){
            u=G[s][i];
            if(u==fa)
            continue;
            ans[u]=ans[s]-dp[u][1]+n-dp[u][1];
            cal(u,s);
        }
    }
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        int i,u,v;
        vector<int> res;
        for(i=0;i<edges.size();i++){
            u=edges[i][0];
            v=edges[i][1];
            G[u].push_back(v);
            G[v].push_back(u);
        }
        n=N;
        dfs(0,-1);
        ans[0]=dp[0][0];
        cal(0,-1);
        for(i=0;i<n;i++)
        res.push_back(ans[i]);
        return res;
    }
};
