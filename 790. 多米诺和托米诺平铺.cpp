class Solution {
public: 
    long long dp[1005];
    long long MOD=1e9+7;
    int numTilings(int N) {
        int i,j;
        dp[0]=dp[1]=1,dp[2]=2,dp[3]=5;
        for(i=4;i<=N;i++){
            dp[i]=(dp[i-1]+dp[i-2])%MOD;
            for(j=3;j<=i;j++)
            dp[i]=(dp[i]+dp[i-j]*2%MOD)%MOD;
        }
        return dp[N];
    }
};
