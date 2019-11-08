class Solution {
public:
    typedef long long ll;
    ll mod=1e9+7;
    ll dp[100005][2][3];
    int checkRecord(int n) {
        int i,j;
        ll ans;
        dp[1][0][0]=1;
        dp[1][1][0]=1;
        dp[1][0][1]=1;
        for(i=2;i<=n;i++){
            dp[i][1][0]=(dp[i-1][0][0]+dp[i-1][0][1]+dp[i-1][0][2])%mod;
            dp[i][0][1]=dp[i-1][0][0];
            dp[i][0][2]=dp[i-1][0][1];
            dp[i][1][1]=dp[i-1][1][0];
            dp[i][1][2]=dp[i-1][1][1];
            dp[i][0][0]=(dp[i-1][0][0]+dp[i-1][0][1]+dp[i-1][0][2])%mod;
            dp[i][1][0]=(dp[i][1][0]+dp[i-1][1][0]+dp[i-1][1][1]+dp[i-1][1][2])%mod;
        }
        ans=0;
        for(i=0;i<=1;i++){
            for(j=0;j<=2;j++)
            ans=(ans+dp[n][i][j])%mod;
        }
        return ans;
    }
};
