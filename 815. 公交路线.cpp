static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();
class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int S, int T) {
        int i,j,k,n,u,v,ans;
        int dp[505][505];
        int INF=0x3f3f3f3f;
        vector<int> G[1000005];
        n=routes.size();
        if(S==T)
        return 0;
        memset(dp,INF,sizeof(dp));
        for(i=0;i<n;i++){
            for(j=0;j<routes[i].size();j++){
                u=routes[i][j];
                for(k=0;k<G[u].size();k++)
                dp[i][G[u][k]]=dp[G[u][k]][i]=1;
                G[u].push_back(i);
            }
        }
        for(i=0;i<n;i++)
        dp[i][i]=0;
        for(k=1;k<=n;k++){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }
        ans=INF;
        for(i=0;i<G[S].size();i++){
            for(j=0;j<G[T].size();j++){
                u=G[S][i],v=G[T][j];
                ans=min(ans,dp[u][v]);
            }
        }
        if(ans>=INF)
        return -1;
        return ans+1;
    }
};
