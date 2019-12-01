class Solution {
public:
    int dp[1005][1005];
    int longestPalindromeSubseq(string s) {
        int i,j,n;
        n=s.size();
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(s[i-1]==s[n-j])
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};
