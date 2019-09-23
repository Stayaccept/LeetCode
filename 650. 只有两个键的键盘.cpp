/*
 * @lc app=leetcode.cn id=650 lang=cpp
 *
 * [650] 只有两个键的键盘
 */
class Solution {
public:
    int dp[2005][2005];
    int minSteps(int n) {
        int i,j,ans;
        int INF=0x3f3f3f3f;
        if(n==1)
        return 0;
        memset(dp,INF,sizeof(dp));
        dp[1][1]=1;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(dp[i][j]==INF)
                continue;
                dp[i+j][j]=min(dp[i+j][j],dp[i][j]+1);
                dp[i+j][i+j]=min(dp[i+j][i+j],dp[i][j]+2);
            }
        }
        ans=INF;
        for(i=1;i<=n;i++)
        ans=min(ans,dp[n][i]);
        return ans;
    }
};

