class Solution {
public:
    int INF=0x3f3f3f3f;
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int i,n;
        int dp[505],vis[505];
        n=days.size();
        memset(dp,0,sizeof(dp));
        memset(vis,0,sizeof(vis));
        for(i=0;i<days.size();i++)
        vis[days[i]]=1;
        for(i=1;i<=days[n-1];i++)
        dp[i]=INF;
        dp[days[n-1]]=min(costs[0],min(costs[1],costs[2]));
        for(i=days[n-1]-1;i>=days[0];i--){
            if(vis[i]==0)
            dp[i]=dp[i+1];
            else{
                dp[i]=min(dp[i],dp[i+1]+costs[0]);
                dp[i]=min(dp[i],dp[i+7]+costs[1]);
                dp[i]=min(dp[i],dp[i+30]+costs[2]);
            }
        }
        return dp[days[0]];
    }
};
