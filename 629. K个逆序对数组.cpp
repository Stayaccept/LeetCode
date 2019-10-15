/*
 * @lc app=leetcode.cn id=629 lang=cpp
 *
 * [629] K个逆序对数组
 */

// @lc code=start
class Solution {
public:
    long long mod=1e9+7;
    long long sum[1005],dp[1005][1005];
    int kInversePairs(int n, int k) {
        int i,j;
        long long u;
        if(k>n*(n-1)/2)
        return 0;
        memset(dp,0,sizeof(dp));
        memset(sum,0,sizeof(sum));
        sum[0]=dp[1][0]=1;
        for(i=1;i<=k;i++)
        sum[i]+=sum[i-1];
        for(i=2;i<=n;i++){
            dp[i][0]=1;
            for(j=1;j<=min(i*(i-1)/2,k);j++){
                u=0;
                if(j-i+1>0)
                u=sum[j-i];
                dp[i][j]=(dp[i][j]+sum[j]-u+mod)%mod;
            }
            sum[0]=1;
            for(j=1;j<=k;j++)
            sum[j]=(sum[j-1]+dp[i][j])%mod;
        }
        return dp[n][k];
    }
};
// @lc code=end

