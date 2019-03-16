class Solution {
public:
    long long MOD=1e9+7;
    long long dp[10][5005];
    int knightDialer(int N) {
        int i,ans;
        for(i=0;i<10;i++)
        dp[i][1]=1;
        for(i=2;i<=N;i++){
            dp[0][i]=(dp[4][i-1]+dp[6][i-1])%MOD;
            dp[1][i]=(dp[6][i-1]+dp[8][i-1])%MOD;
            dp[2][i]=(dp[7][i-1]+dp[9][i-1])%MOD;
            dp[3][i]=(dp[4][i-1]+dp[8][i-1])%MOD;
            dp[4][i]=(dp[3][i-1]+dp[9][i-1]+dp[0][i-1])%MOD;
            dp[6][i]=(dp[1][i-1]+dp[7][i-1]+dp[0][i-1])%MOD;
            dp[7][i]=(dp[2][i-1]+dp[6][i-1])%MOD;
            dp[8][i]=(dp[1][i-1]+dp[3][i-1])%MOD;
            dp[9][i]=(dp[2][i-1]+dp[4][i-1])%MOD;
        }
        ans=0;
        for(i=0;i<10;i++)
        ans=(ans+dp[i][N])%MOD;
        return ans;
    }
};
