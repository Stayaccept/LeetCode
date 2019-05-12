class Solution {
public:
    int id[505],dp[505],deg[505];
    vector<int> ans,G[505];
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int i,u,v,n,N;
        queue<int> qu;
        N=quiet.size()-1,n=richer.size();
        memset(deg,0,sizeof(deg));
        for(i=0;i<n;i++){
            u=richer[i][0];
            v=richer[i][1];
            G[u].push_back(v);
            deg[v]++;
        }
        for(i=0;i<=N;i++){
            if(deg[i]==0)
            qu.push(i);
            id[i]=i;
            dp[i]=quiet[i];
        }
        while(qu.size()){
            u=qu.front();
            qu.pop();
            for(i=0;i<G[u].size();i++){
                v=G[u][i];
                if(dp[u]<dp[v]){
                    dp[v]=dp[u];
                    id[v]=id[u];
                }
                deg[v]--;
                if(deg[v]==0)
                qu.push(v);
            }
        }
        for(i=0;i<=N;i++)
        ans.push_back(id[i]);
        return ans;
    }
};
