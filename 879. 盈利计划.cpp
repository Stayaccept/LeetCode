class Solution {
public:
    long long dp[105][105];
    long long MOD=1e9+7;
    int profitableSchemes(int G, int P, vector<int>& group, vector<int>& profit) {
        int i,j,k,n,u,v,t;
        long long ans;
        n=group.size();
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(i=0;i<n;i++){
            u=group[i],v=profit[i];
            for(j=G-u;j>=0;j--){
                for(k=P;k>=0;k--){
                    t=min(P,k+v);
                    dp[j+u][t]=(dp[j+u][t]+dp[j][k])%MOD;
                }
            }
        }
        ans=0;
        for(i=1;i<=G;i++)
        ans=(ans+dp[i][P])%MOD;
        return ans;
    }
};
