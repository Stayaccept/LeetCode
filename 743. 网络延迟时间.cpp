class Solution {
public:
    int dp[105][105];
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        int i,j,k,n,u,v,w,ans;
        int INF=0x3f3f3f3f;
        memset(dp,INF,sizeof(dp));
        for(i=0;i<times.size();i++){
            u=times[i][0];
            v=times[i][1];
            w=times[i][2];
            dp[u][v]=w;
        }
        for(k=1;k<=N;k++){
            for(i=1;i<=N;i++){
                for(j=1;j<=N;j++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }
        ans=-1;
        for(i=1;i<=N;i++){
            if(i!=K)
            ans=max(ans,dp[K][i]);
        }
        if(ans>=INF)
        return -1;
        return ans;
    }
};
