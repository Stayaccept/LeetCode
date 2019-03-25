class Solution {
public:
    int numMusicPlaylists(int N, int L, int K) {
        long long MOD=1e9+7;
        long long i,j,ans,dp[105][105];
        memset(dp,0,sizeof(dp));
        dp[1][1]=N;
        for(i=2;i<=L;i++){
            for(j=1;j<=N;j++){
                dp[i][j]=(dp[i-1][j-1]*(N-j+1)%MOD+dp[i-1][j]*max(0LL,j-K)%MOD)%MOD;
            }
        }
        return dp[L][N];
    }
};
