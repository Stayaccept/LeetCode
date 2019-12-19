class Solution {
public:
    int dp[505];
    int numTrees(int n) {
        int i,j;
        dp[0]=dp[1]=1;
        for(i=2;i<=n;i++){
            for(j=0;j<=i-1;j++)
            dp[i]+=dp[j]*dp[i-1-j];
        }
        return dp[n];
    }
};
